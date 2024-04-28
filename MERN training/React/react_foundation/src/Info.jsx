import React from "react";

const Test = () => {
  let id = 1;

  //& This markAsDone function won't work as we don't access DOM directly in React but let React deal with it.In React, we don't manipulate the DOM directly. Instead, we let React handle the DOM updates based on our component's state and props.

  const markAsDone = (id) => {
    const parent = doucment.getElementById("container");
    parent.children[2].innerHTML = "Done!";
  };
  const createChild = (title, description, id) => {  
    const outerDiv = document.createElement("div");
    const childDivTtile = document.createElement("div"); 
    childDivTtile.innerHTML = title;
    const childDivDescription = document.createElement("div");
    childDivDescription.innerHTML = description;
    const childDivButton = document.createElement("button");
    childDivButton.innerHTML = "Mark as Done";
    childDivButton.setAttribute("onclick", `markAsDone(${id})`);
    outerDiv.appendChild(childDivTtile);
    outerDiv.appendChild(childDivDescription);
    outerDiv.appendChild(childDivButton);
    outerDiv.setAttribute("id", id);
    return outerDiv;
  };
  const addTodo = () => {
    const title = document.getElementById("title").value;
    const description = document.getElementById("description").value;
    // const originalHTML = document.getElementById("container").innerHTML;

    //! The below method is ugly so alternative method is
    // document.getElementById("container").innerHTML= originalHTML+ `
    // <div>
    // <div>${title}</div>
    // <div>${description}</div>
    // <button>Mark as done</button>
    // </div>`;

    //^ Create an Element in memory which will eventually get appended to the DOM(website)

    const parent = document.getElementById("container");

    parent.appendChild(createChild(title, description, id++));
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

export default Test;
