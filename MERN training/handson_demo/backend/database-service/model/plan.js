const mongoose = require("mongoose");
const planSchema = mongoose.Schema(
  {
    id: { type: Number },
    plan: { type: Number },
    SMS: { type: Number },
    category: { type: String, enum: ["prepaid", "postpaid"] },
  },
  { collection: "offers" },
);

module.exports = mongoose.model("offers", planSchema);
