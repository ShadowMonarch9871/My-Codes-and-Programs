import { useState } from "react";
import reactLogo from "./assets/react.svg";
import viteLogo from "/vite.svg";
import "./App.css";
import { Canvas } from "react-three-fiber";
import {  Box2 } from "three";
import Scene from "./Scene";
function App() {
  return (
    <>
      <Scene />
    </>
  );
}

export default App;
