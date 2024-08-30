import React, { useContext } from "react";
import { themeContext } from "./App";

const Header = () => {
  const theme = useContext(themeContext);
  return (
    <>
      <h1 style={{ color: theme === "white" ? "black" : "white" }}>
        UseState used here
      </h1>
    </>
  );
};

export default Header;
