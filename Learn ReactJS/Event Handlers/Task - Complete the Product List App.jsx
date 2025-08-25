import "./App.css";

// Our list of products - you don't need to change this
const products = [
  { id: 1, name: "Laptop", price: 900 },
  { id: 2, name: "Mouse", price: 20 },
  { id: 3, name: "Keyboard", price: 40 },
  { id: 4, name: "Monitor", price: 150 },
  { id: 5, name: "USB Cable", price: 10 },
];

const style1 = {
  "border":"2px solid rgb(255, 0, 0)"
}

const style2 = {
  "border":"2px solid rgb(128, 128, 128)"
}

function ProductCard(props) {
  function handleClick() {
    // STEP 2: Make this show alert with product name
    // Hint: Use props.product.name to get the name
    // Alert should look like "Product Selected: Laptop"
    // {console.log("Clicked", props.product.name)}
    {alert("Product Selected: " + props?.product?.name)}
  }

  return (
    <div 
      className="product-card"
      role="article"
      // STEP 3: Add inline style for border
      // Border should be:
      // - "2px solid rgb(255, 0, 0)" if price > 50
      // - "2px solid rgb(128, 128, 128)" if price <= 50
      // Hint: Use props.product.price and ternary operator
      style={props.product.price > 50 ? style1 : style2}
    >
      {/* STEP 1: Add product information here */}
      {/* Show product name in <h3> */}
      {/* Show price in <p> with text "Price: $X" */}
      {
        <>
          <h3>{props.product.name}</h3>
          <p>Price: ${props.product.price}</p>
          <button onClick={handleClick}>Select</button>
          </>
      }
      
      {/* STEP 2: Add button that triggers handleClick */}
      {/* <button onClick={...}>Select</button> */}
    </div>
  );
}

function App() {
  return (
    <div className="container">
      <h1>Product List</h1>
      <div className="product-list">
        {/* STEP 4: Display all products */}
        {/* Use .map() to create ProductCards for all products */}
        {/* Don't forget to add unique 'key' prop */}
        {products.map((product, index) => (
          // Create ProductCard components here
          <ProductCard key={index} product={product}/>
        ))}
      </div>
    </div>
  );
}

export default App;
