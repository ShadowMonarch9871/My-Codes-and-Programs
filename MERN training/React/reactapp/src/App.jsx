import "./App.css";
import technology_image from "../src/assets/technology.jpg";
import Cards from "./components/Cards";
import { createContext, useContext, useState } from "react";
import React from "react";
const UserContext = createContext();
const Second = () => {
  const user = useContext(UserContext);
  return (
    <div>
      <h1>Second Component Hello {user}</h1>
    </div>
  );
};
const App = () => {
  const handleClick = () => {
    console.log("Buttton pressed");
  };
  const isLogged = true;
  const [user, setUser] = useState("Ayush");

  return (
    <div >
      <UserContext.Provider value={user}>
        <h1 className="text-9xl">Hello {user}</h1>
        <Second />
        
      </UserContext.Provider>
    </div>

    //! <>
    // <div className="main-div">
    //   <h1>Hello World</h1>
    //   <div className="img">
    //     <img
    //       src={technology_image}
    //       alt="technology"
    //     />
    //   </div>
    // </div>
    // <Cards heading={`ayush`} para={`pokhriyal`}/>
    // </>
  );
};

export default App;
