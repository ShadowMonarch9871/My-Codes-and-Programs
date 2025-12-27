const express = require('express')
const cors = require('cors')
const connectDb = require('./config/db')
const planRoute = require('./routes/planRoute.js')
const app = express()
app.use(express())
app.use(cors())
const PORT =5001
connectDb();
app.use('/api',planRoute)

app.listen(PORT,()=>{
  console.log(`Listening to ${PORT}`)
}
)
