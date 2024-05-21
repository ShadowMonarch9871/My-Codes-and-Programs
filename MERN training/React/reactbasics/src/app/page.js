"use client";
import React, { useState } from "react";

const page = () => {
  let [marks, setMarks] = useState(100);
  const changeMarks = () => {
    console.log(marks);
    setMarks(101)
    console.log(marks);
  };
  return (
    <>
      <h1 className="font-bold ">Marks are {marks}</h1>
      <button className="bg-grey-700" onClick={changeMarks}>
        Change Marks
      </button>
    </>
  ); 
};

export default page;
