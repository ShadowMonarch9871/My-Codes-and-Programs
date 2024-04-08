//!Sync bole to commands line by line chalegi jab ek complete hogi tab dusri chalu hogi
//*async ek sath chalo kr do sab jo jab complete ho tab uska output dedo

//^ setTimeout,setInterval,promises,fetch,axios,XMLHttpRequest agar inme se koi bhi use ho to woh async hai
// function running() {
//   console.log("chal gya bhidu");
// }
// console.log("main");
// setTimeout(running, 0);
// // running();
// console.log("yo ho");
// console.log("chal rha hai na code to dikkat kya hia kam kro apna ");
//!async function always run after sync code for ex setTimeout set at 0 sec will run after sync code because sync functions run in main stack where they execute while async goes to side stack where it processes and when all code in main stack is executed only then the async code(after processing) goes to main stack where it gives an output.

//^ Async function works as - first async function goes into webAPIs where they wait for processing then they go to callback queue and from then they go to stack for execution. Now it doesn't matter which async function went first to webAPI the function which wait is completed first goes into callback queue first.

//!An asynchronous function is a function that returns a Promise, which is an object representing a value which may not be available yet, but will be resolved at some point in the future.

//& Promises can have only two values either resolve(res) or reject(rej) states. If resolve then then block and if reject then catch block.
//! Promise mainly third party ke leye use hota hai ke agar req ho gyi to badiya nahi to rej ho gyi kuch krna padega.
//* Promise in which user will choose a number and if number<5 resolve otherwise reject.

// var ans = new Promise((res, rej) => {
//   var a = Math.floor(Math.random() * 10);
//   if (a<5) {
//     return res();
//   } else {
//     return rej();
//   }
// });
// ans
//   .then(() => {
//     console.log("Resolve ho gya hai");
//   })
//   .catch(() => {
//     console.log("Reject ho gya hai");
//   });

//^ DSA karo
//^ Phir DEV kro
//^ Phir life set

// let b=new Promise((res,rej)=>{
//     return res("DSA Karo")
// })
// let c=b.then((data)=>{
//     console.log(data);
//     return new Promise((res,rej)=>{
//         return res("Phir DEV kro")
//     })
// })
// let d=c.then((data)=>{
//     console.log(data);
//     return new Promise((res,rej)=>{
//         return res("Phir life set");
//     })
// })

//^ For using async code we have to use promises which can make the code will become larger due to then to prevent it we can use async await. What it do as both fetch and json are async methods so they will return promises and await allows us to skip writing then statements.
//& If let ans=raw.json(); without using await it will return promise and no output
// async function abcd() {
//   let raw = await fetch("https://randomuser.me/api/");
//   let ans = await raw.json();
//   console.log(5 + 4);

//   console.log(ans);
// }
// abcd();

//! lets form an async function
const Timeout = (callback, duration) => {
  setTimeout(callback, duration);
};

Timeout(function () {
  console.log("Ya ho ho ho!!!");
}, 3000);

//& The above function is using a callback and under the hood setTimeout is used to make the code async

//^ Promisifying the above function
const PromisifiedTimeOut=(duration)=>{
  p=new Promise=(res,rej)=>{

  }
return p;
}

//* The simple non promisifed async approach doesn't return anything and needs a callback. The promisified approach needs to return something(a promise) and doesn't take any callback