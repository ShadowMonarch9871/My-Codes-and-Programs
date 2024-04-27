import React from "react";

const App = () => {
  const addTodo = () => {
    const title = document.getElementById("title").value;
    const description = document.getElementById("description").value;
    const originalHTML = document.getElementById("container").innerHTML;
    document.getElementById("container").innerHTML= originalHTML+ `
    <div>
    <div>${title}</div>
    <div>${description}</div>
    <button>Mark as done</button>
    </div>`);
  };
  return (
    <div>
      <input id="title" type="text" placeholder="Title" /> <br />
      <br />
      <input type="text" id="description" placeholder="Description" /> <br />
      <br />
      <button onClick={addTodo}>Add todo</button>
      <div id="container"></div>
    </div>
  );
};

export default App;
