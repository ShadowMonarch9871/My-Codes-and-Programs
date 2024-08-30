//!map filter and arrow fns are helper functions
const sum=(a,b)=>{
    return a+b;
}

//^ Given an array give me back  a new array in which every value is multiplied by 2
const arr=[1,2,3,4,5]
const newarr=arr.map((e)=>{
    return e*2;
})
newarr.forEach((e)=>{
    console.log(e) 
}) 
//* Here map returns an array/element while simple forEach loop just do something with the elements. The change isn't reflected in the actual array though using forEach.

//& Given an input array give me only even values
const test=[1,2,3,4,5]
const test1=test.filter((e)=>{
    return e%2==0
})
//! Using map in the above function will give either true or false(just check the values)
test1.forEach((e)=>{
    console.log(e);
})