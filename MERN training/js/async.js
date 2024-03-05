//!Sync bole to commands line by line chalegi jab ek complete hogi tab dusri chalu hogi
//*async ek sath chalo kr do sab jo jab complete ho tab uska output dedo

//^ setTimeout,setInterval,promises,fetch,axios,XMLHttpRequest agar inme se koi bhi use ho to woh async hai 
function running(){
    console.log("chal gya bhidu");
}
console.log("main");
setTimeout(running,0);
// running();
console.log("yo ho");
console.log("chal rha hai na code to dikkat kya hia kam kro apna ") 
//!async function always run after sync code for ex setTimeout set at 0 sec will run after sync code because sync functions run in main stack where they execute while async goes to side stack where it processes and when all code in main stack is executed only then the async code(after processing) goes to main stack where it gives an output.