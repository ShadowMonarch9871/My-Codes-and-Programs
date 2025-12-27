const seneca = require("seneca");
const products = [
  { id: 1, name: "laptop", price: 100, stock: 10 },
  { id: 2, name: "smartPhone", price: 40, stock: 8 },
  { id: 3, name: "headPhone", price: 20, stock: 15 },
];

seneca.add('role:product,cmd:getAll',(msg,reply)=>{
  reply(null,{products})
})
.add('role:product,cmd:getById',(msg,reply)=>{
    const product = products.find(p=>p.id==msg.id);
    if(!product){
      return reply(new Error("Product Not Found"))
    }
    reply(null,{product})
  })
