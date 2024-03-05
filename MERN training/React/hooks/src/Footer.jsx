import React, { useContext } from "react";
import { themeContext } from "./App";

const Footer = () => {
  const theme = useContext(themeContext);
  return (
    <>
      <p
        style={{
          position: "absolute",
          bottom: 0,
          color: theme === "white" ? "black" : "white",
        }}
      >
        Just a Footer
      </p>
    </>
  );
};

export default Footer;
