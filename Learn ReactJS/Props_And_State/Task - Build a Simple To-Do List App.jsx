import { useState } from "react";

function App() {
  const [tasks, setTasks] = useState([]); // Lifted state in parent

  // Function to add a new task
  function addTask(task) {
    if (task.trim() !== "") {
      setTasks([...tasks, task]);
    }
  };

  // Function to remove a task
  function removeTask(index) {
    setTasks(tasks.filter((_, i) => i !== index));
  };

  return (
    <div style={{ textAlign: "center", marginTop: "50px" }}>
      <h2>📝 To-Do List</h2>
      <TaskInput addTask={addTask} />
      <TaskList tasks={tasks} removeTask={removeTask} />
    </div>
  );
}

// Component for input field
function TaskInput({ addTask }) {
  const [task, setTask] = useState("");

  return (
    <div>
      <input
        type="text"
        value={task}
        onChange={(e) => setTask(e.target.value)}
        placeholder="Enter a task..."
      />
      <button onClick={() => { addTask(task); setTask(""); }}>Add</button>
    </div>
  );
}

// Component to display the list of tasks
function TaskList({ tasks, removeTask }) {
  return (
    <ul>
      {tasks.map((task, index) => (
        <li key={index}>
          {task} <button onClick={() => removeTask(index)}>Remove</button>
        </li>
      ))}
    </ul>
  );
}

export default App;
