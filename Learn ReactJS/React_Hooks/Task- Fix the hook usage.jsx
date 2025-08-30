import { useState, useId } from "react";
import "./App.css";

// eslint-disable-next-line react/prop-types
function SimpleForm({ name: initialName, email: initialEmail }) {
  const [name, setName] = useState(initialName);
  const [email, setEmail] = useState(initialEmail);

  const uniqueId = useId();

  // if (initialName != undefined){
  //   setName(initialName);
  // }

  
  // if (initialEmail != undefined){
  //   setEmail(initialEmail);
  // }

  function handleSubmit(event) {
    event.preventDefault();
    console.log("Submitted:", { name, email });
    setName(""); // Clear the input fields
    setEmail("");
  }

  return (
    <form className="simple-form" onSubmit={handleSubmit}>
      <label htmlFor={`${uniqueId}-name`}>Name:</label>
      <input
        type="text"
        id={`${uniqueId}-name`}
        className="input-field"
        value={name}
        onChange={(e) => setName(e.target.value)}
      />

      <label htmlFor={`${uniqueId}-email`}>Email:</label>
      <input
        type="email"
        id={`${uniqueId}-email`}
        className="input-field"
        value={email}
        onChange={(e) => setEmail(e.target.value)}
      />

      <button type="submit" className="submit-button">Submit</button>
    </form>
  );
}

function App() {
  return <SimpleForm name="Codechef" email="codechef@gmail.com" />;
}

export default App;
