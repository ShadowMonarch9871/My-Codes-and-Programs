//! React is useful for dynamic websites(i.e changing the HTML code) using DOM Manipulation. 
//^ Under the hood the React compiler converts React code to HTML/CSS/JS
//* React three main parts- State + Components + Re-rendering.
//todo State is an object that defines/represents the current state/condition of the app or Represents the dynamic things in the app. Their Current state that is how they are current and their current values.
//todo State-anything that changes/dynamic. 
//? Components define how an element should render, given a state. It's reusable, dynamic, HTML snippet that changes given the state.
//~ Re-rendering - A state change triggers a re-render(represents the actual DOM being manipulated).



import React from 'react'

const Test = () => {
  return (
    <div>Test</div>
  )
}

export default Test