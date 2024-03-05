const nodemon = require("nodemon");

console.log("This is root file");

// const sum=require ("./add.js");
// console.log(sum)

// const os = require("os");
// console.log(os.hostname());
// console.log(os.freemem());
// const path = require("path");
// console.log(path.dirname(__filename));
// console.log(path.basename(__filename));
// const fs = require("fs");

//!Server
// const http = require("http");
// // console.log(http);
// const server = http.createServer((req, res) => {
//   console.log("Node Server Started");
//   res.end("<h1>This is my Response! </h1>");
//   //   res.setHeader('Content-Type','text/html')
// });
// server.listen(3000, () => {
//   console.log("Server runs");
// });

const http = require("http");
const server = http.createServer((req, res) => {
  console.log("Node Server Started");
  if (req.url === "/") {
    res.end("<h1>This is my Home Page</h1>");
  } else if (req.url === "/about") {
    res.end("<h1>This is about Page</h1>");
  }
});
server.listen(3000, () => {
  console.log("Server runs");
});
