// Const vs let vs var
// const/let -> block scoped
// var -> function scoped

function greetings() {
  var name1 = "dummy";
  console.log(name1);
  if (true) {
    let secondname = "jumbo";
    console.log(secondname);
    secondname="dumbo";
    //Const won't allow reassigning
    console.log(secondname);

  }
  //&it won't work as let as well as const can't work outside the block
  // console.log(secondname);
}
// greetings();

//Template Literals/Template strings
let name = "Ayush"
let company = "paisa paisa "
console.log("My name is " + name + " I wanna join " +company);

// Now using template string
console.log(`My name is ${name} I wanna join ${company}`)

//Default arguments
function sum(a=2,b=5){
  console.log(a+b)
}
// sum(2,3)
// sum()
// sum(3)

// Fat arrow function
function sum() {
  let a = 5,
    b = 10;
  console.log(a + b);
}
// sum();
//!Pro (Arrow funtion) bann ne ka tarika

const sum1 = () => {
  let a = 5,
    b = 10;
  console.log(a + b);
};
sum1();

const sum2 = () => console.log(`${(a = 5)} + ${(b = 10)} =`, a + b);
sum2();

//! Arrow function can't be called before initiallization while normal function can be called

let str1 = "123";
console.log(typeof str1);

Arrays
var arr = ["p1", "p2", "p3", 1, true];
var arr1 = ["p1", "p2", "p3", 1, true];

// console.log(arr[4]);
// console.log(arr.length);
// console.log(arr.toString());
// console.log(arr);
// console.log(arr.concat(arr1));
// console.log(arr.sort());
// console.log(arr.push("sgds"));
// console.log(arr.pop());
// console.log(arr);
var arr = ["p1", "p2", "p3", 1, true];
for (let i = 0; i < arr.length; i++) {
  console.log(arr[i]);
}
//!for in loop (returns index)
for (let element in arr){
  console.log(element)
}
//! for of loop (return data)
for (let element of arr){
  console.log(element)
}
//!for each loop can do an action for every element but that action result is not saved in original array.
arr.forEach((element, index,array) => {
  //callback function-> function inside a function
  console.log(`${element} present at ${index}`);
});

// !Map
var arr = ["p1", "p2", "p3", 1, true];
arr.forEach((element, index,array) => {
  //callback function-> function inside a function
  console.log(`${element} present at ${index}`);
});
arr.map((element, index) => {
  console.log(`${element} present at ${index}`);
});

//! for each performs operations on same array while map form a new array and do operations on these also map is unchainable
// let num = arr.map((e) => {
//   return e > 2;//compare each element of arr as whether they are > 2 or not.
// });
console.log(arr)
console.log(num)

// reduce
arr = [1, 2, 3, 4, 5, 6];
let num = arr.reduce((accumulator, element) => {
  return (accumulator += element);//sum
});
console.log(num);

Object
let biodata = {
  myName: "Ayush",
  Name: {
    firstName: "Ayush",
    lastName: "Pokhriyal",
  },
  myAge: 21,
  role: "Master",
  //Below are fuctions also known as methods
  getData: function () {
    console.log("I am an object");
  },
  //Another way to form a function
  showResult() {
    console.log("Cool");
  },
};
console.log(biodata.role);
biodata.getData;
biodata.showResult();
console.log(biodata.Name.lastName)

//Destructuring
//Rest and Spread Operators
let emojiArray = ["smiling", "crying"];
console.log(emojiArray[1]);
[emo1, emo2] = ["smiling", "crying"];
console.log(emo1);
//Below is rest operator
[emo1, emo2,...unwanted] = ["smiling", "crying","hello",1,2];
console.log(unwanted)
//This is spread operator
// let arr1=["Hello",1,2,3,...emojiArray]
// console.log(arr1)
let tech = "team";
let obj = {
  [tech]: "Software",//Square brackets make tech dynamic i.e. the o/p is team: 'Software' and without it is tech: 'Software'

};

console.log(obj);

Filter
a1 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
arr = a1.filter(function (e) {
  //   console.log(e > 5);// returns true 5 times
  return e > 5;
});
console.log(arr); //This will work as filter returns values which can be stored in another array
arr2 = a1.filter((element) => {
  return element > 8;
});
console.log(arr2);
// Use filter when You want to store some particular elements and map when you want to perform some specific operations and store the values. For each won't return the values that'w why they can't be stored in another array

// Chaining implementing a chain of functions
a1 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
let arr = a1
  .map((element) => {
    return element + 1;
  })
  .filter((element) => {
    return element > 3;
  });
console.log(arr);
dispatchEvent