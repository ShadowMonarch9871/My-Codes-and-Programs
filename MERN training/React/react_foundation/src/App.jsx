import React, { useState } from "react";
function Button(props) {
  function onButtonClick() {
    props.setCount(props.count + 1);
  }
  return <button onClick={onButtonClick}>Counter{props.count}</button>;
}
const App = () => {
  const [count, setCount] = useState(0);

  return (
    <div>
      {/* <Button count={count} setCount={setCount}></Button> */}
      <button onClick={()=>setCount((count)=> count+1)}>
        Count is {count}
      </button>
    </div>
  );
};

export default App;
