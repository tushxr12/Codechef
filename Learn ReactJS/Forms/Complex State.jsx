import React, { useState } from "react";
import "./App.css";

function ProfileUpdater() {
  const [user, setUser] = useState({
    name: "Alice",
    age: 25,
    address: { city: "Delhi", country: "India" }
  });

  const [nameInput, setNameInput] = useState("");
  const [ageInput, setAgeInput] = useState("");
  const [cityInput, setCityInput] = useState("");

  const updateName = () => {
    setUser({ ...user, name: nameInput });
    setNameInput("");
  };

  const updateAge = () => {
    const ageInNumber = Number(ageInput);
    if (!Number.isNaN(ageInNumber)) {
      setUser({ ...user, age: ageInNumber });
    }
    setAgeInput("");
  };

  const updateCity = () => {
    setUser({ ...user, address: { ...user.address, city: cityInput } });
    setCityInput("");
  };

  return (
    <div className="profile-container">
      <h2>User Profile</h2>
      <p><strong>Name:</strong> {user.name}</p>
      <p><strong>Age:</strong> {user.age}</p>
      <p><strong>Address:</strong> {user.address.city}, {user.address.country}</p>

      <div className="input-group">
        <input 
          type="text"
          placeholder={`Current name: ${user.name}`}
          value={nameInput}
          onChange={(e) => setNameInput(e.target.value)}
        />
        <button onClick={updateName}>Update Name</button>
      </div>

      <div className="input-group">
        <input 
          type="number"
          placeholder={`Current age: ${user.age}`}
          value={ageInput}
          onChange={(e) => setAgeInput(e.target.value)}
        />
        <button onClick={updateAge}>Update Age</button>
      </div>

      <div className="input-group">
        <input 
          type="text"
          placeholder={`Current city: ${user.address.city}`}
          value={cityInput}
          onChange={(e) => setCityInput(e.target.value)}
        />
        <button onClick={updateCity}>Update City</button>
      </div>
    </div>
  );
}

export default ProfileUpdater;
