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
      <Button count={count} setCount={setCount}></Button>
    </div>
  );
};

export default App;
