import { useState } from "react";
import styles from "./App.module.css";

export function Temperature({ defaultTemperature = 0 }) {
  const [temperature, setTemperature] = useState(defaultTemperature);
  const [currentUnit, setCurrentUnit] = useState("C");

  const increase = () => {
    setTemperature(temperature + 1);
  };

  const decrease = () => {
    setTemperature(temperature - 1);
  };

  const convertTemperature = () => {
    if (currentUnit === "C") {
      const tempInF = (temperature * 9) / 5 + 32;
      setTemperature(tempInF);
      setCurrentUnit("F");
    } else {
      const tempInC = ((temperature - 32) / 9) * 5;
      setTemperature(tempInC);
      setCurrentUnit("C");
    }
  };

  return (
    <div className={styles.wrapper}>
      <h1>Temperature Converter</h1>
      <div className={styles.display}>
        {temperature.toFixed(2)}°{currentUnit}
      </div>
      <div className={styles.controls}>
        <button onClick={increase}>Increase</button>
        <button onClick={decrease}>Decrease</button>
        <button onClick={convertTemperature}>
          Convert to {currentUnit === "C" ? "Fahrenheit" : "Celsius"}
        </button>
      </div>
    </div>
  );
}

export default function App() {
  return <Temperature />;
}
