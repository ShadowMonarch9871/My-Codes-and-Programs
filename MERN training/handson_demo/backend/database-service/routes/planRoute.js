const {getPlans,addPlans}= require('../controller/planController')
const express = require('express')
const router = express.Router();

router.get('/plans/:category',getPlans)
router.post('/plans/addPlan',addPlans)

module.exports = router
