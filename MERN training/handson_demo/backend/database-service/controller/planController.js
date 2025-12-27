const offers = require("../model/plan.js");

const getPlans = async (req, res) => {
  try {
    const { category } = req.params;
    const plans = await offers.find({ category });
    res.json(plans);
  } catch (err) {
    console.log("failed to fetch data", err);
  }
};

const addPlans = async (req, res) => {
  try {
    const newPlan = req.body;
    const plan = new offers(newPlan);
    await plan.save();
  } catch (err) {
    console.log("failed to add data", err);
  }
};

module.exports = {getPlans,addPlans}
