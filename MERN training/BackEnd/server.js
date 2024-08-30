const expressvar = require("express");
const app = expressvar(); //!Needs to access methods as varname() so instead of using it again and again assign it to another variable
app.listen(3000, () => {
  console.log("Express Server is on");
});

app.set("view Engine", "ejs");

app.use(function (req, res, next) {
  console.log("This is middleware and will get printed first");
  //& Without next it won't go forward to routing part
  next();
});
app.use(express.static("./public"));

app.get("/", (req, res) => {
  // res.sendStatus(400);
  //   console.log("This is home page")
  //   res.send("<h1>This is home Page</h1>");
  res.render("index.ejs");
});
//^This is static routing below creating pages manually
// app.get("/users/Ayush", (req, res) => {
//   res.send("<h1>This is Ayush's database</h1>");
// });
// app.get("/users/Shadow", (req, res) => {
//   res.send("<h1>This is Shadow's database</h1>");
// });
// app.get("/users/Monarch", (req, res) => {
//   res.send("<h1>This is Monarch's database</h1>");
// });
//^Dynamic Programming Now

app.get("/users/:userName", (req, res) => {
  //   res.send(`<h1>This is ${req.params.userName} database</h1>`);
  res.render("user.ejs", {
    userName: req.params.userName,
  });
});
