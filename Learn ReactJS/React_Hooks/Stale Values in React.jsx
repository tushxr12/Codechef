import React, {useState, useEffect} from "react";

function LightSwitch() {
  const [isOn, setIsOn] = useState(false);

  useEffect(() => {
    const handleKeyPress = (e) => {
      if (e.code === 'KeyL') {
        setIsOn(current => !current);
      }
    };
    
    window.addEventListener('keydown', handleKeyPress);
    return () => window.removeEventListener('keydown', handleKeyPress);
  }, []); 

  return (
    <div>
      <button onClick={() => setIsOn(!isOn)}>
        Toggle Light (Button)
      </button>
      <p>Light is {isOn ? "ON 🌟" : "OFF 🌑"}</p>
      <small>Press "L" key to toggle!</small>
    </div>
  );
}

export default LightSwitch;
