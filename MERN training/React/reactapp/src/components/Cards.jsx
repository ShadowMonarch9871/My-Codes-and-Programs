import React from "react";
import image from "../assets/technology.jpg";

const Cards = (props) => {
  return (
    <div>
      <img src={image} width={300} alt="" />
      <div>
        <h2>{props.heading}</h2>
        <p>{props.para}</p>
      </div>
    </div>
  );
};

export default Cards;
