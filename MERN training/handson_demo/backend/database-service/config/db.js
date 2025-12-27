const mongoose = require("mongoose");

const connectDb = async () => {
  try {
    const conn = await mongoose.connect("mongodb://localhost:27017/airvoice", {
      useUnifiedTopology: true,
      useNewUrlParser: true,
    });
    console.log("connected to database");
  } catch (err) {
    console.log("failed to connect to database",err) ;
  }
};

module.exports = connectDb
