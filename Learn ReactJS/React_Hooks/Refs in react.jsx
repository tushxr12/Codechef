import { useState } from 'react';
import {useRef} from 'react';
import './App.css';

function FocusManager() {
  const [isFocused, setIsFocused] = useState(false);
  const inputRef = useRef(null);

  // ❌ Missing useRef implementation
  const handleFocus = () => {
    // TODO: Focus input using ref
    inputRef.current.focus();
    setIsFocused(true);
  };

  const handleBlur = () => {
    // TODO: Blur input using ref
    inputRef.current.blur();
    setIsFocused(false);
  };

  return (
    <div className="container">
      <input
        type="text"
        className={`input-field ${isFocused ? 'input-focused' : ''}`}
        placeholder="Click buttons to focus/blur"
        // TODO: Add ref here
        ref={inputRef}
      />
      
      <div className="button-group">
        <button className="action-button" onClick={handleFocus}>
          Focus Input
        </button>
        <button className="action-button" onClick={handleBlur}>
          Blur Input
        </button>
      </div>
    </div>
  );
}

export default FocusManager;
