//!selectors using javaScript
var collection = document.getElementsByClassName(
  "yehan par class ka naam dal do un sab ke list de dega collection variable mai"
);

//^same case getElementbyId and getElementbyTagname ke leye bhi

var collection1 = doucment.querySelector(
  "yehan pe (.className) (tags) ya (#id) kuch bhi dal do chal jayega bas . classes ke leye # id  ke leye or tags ke leye bas naam "
);
var collection2 = doucment.querySelectorAll(
  "yehan pe className tags ya id kuch bhi dal do chal jayega"
);
//*querySelector will return the first element for all elements use querySelectorAll

var colorchangingdemo = document.querySelector(".classname");
colorchangingdemo.style.backgroundColor = "red";
colorchangingdemo.style.font = "abc";
var changingEverything = document.querySelector(".classname");

//&since we have an array in changingEverything we can apply looping to change all elements at once also
changingEverything.forEach((element) => {
  element.style.color = "green"; //^changing everyelement
});

//!Now let's learn how to use events

const button1 = document.querySelector(".btn"); //^here btn is the className
button1.addEventListener("click", function_jo_desired_kam_krega);
function function_jo_desired_kam_krega() {
  document.body.style.color = "white";
}
//*can also do it as
button1.addEventListener("click", () => {
  document.body.style.color = "white";
});

//? we have an input box and a button we type something there and press the button give the content written as output on console
var button = document.querySelector("button");
button.addEventListener("click", (e) => {
  var input_value = document.querySelector("input").value; //the value inside the input box is given to input
  alert(input_value);
});
//! note that in the above function we are using (e)=>{} not (()=>{}) as the later is an iife(immediately invoked function expression ) and will get execute when the script runs not when button is pressed
