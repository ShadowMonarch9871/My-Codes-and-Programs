import React, { createContext, useEffect, useRef, useState } from "react";
import Header from "./header";
import Footer from "./Footer";
import "./App.css";
export const themeContext = createContext();
const App = () => {
  const [theme, setTheme] = useState("white");
  const count = useRef(0);
  useEffect(() => {
    count.current = count.current + 1;
  });
  const changeTheme = () => {
    setTheme((prevColor) => (prevColor === "white" ? "black" : "white"));
  };
  const [inputValue, setInputValue] = useState("");

  return (
    <>
      <themeContext.Provider value={theme}>
        <div
          className="wrapper"
          style={{
            height: "100vh",
            width: "100vw",
            background: "#f1eeee9c",
            // background: theme,
          }}
        >
          <div
            style={{
              paddingTop: "10px",
              display: "flex",
              flexDirection: "column",
              alignItems: "center",
              justifyContent: "center",
            }}
          >
            <Header />

            <button
              style={{
                marginTop: "1rem",
                background: "whitesmoke",
                borderRadius: "5px",
              }}
              onClick={changeTheme}
            >
              Change theme 🌙 or ☀️
            </button>
            <input
              style={{
                marginTop: "1rem",
                borderRadius: "5px",
              }}
              type="text"
              value={inputValue}
            />

            <Footer />
          </div>
        </div>
      </themeContext.Provider>
    </>
  );
};

export default App;
