arr = [1, 2, 3, 4, 5, 6];
brr = [7, 8, 9, 10, ...arr];
brr.pop();
let num = arr.forEach((element) => {
  return (element += 2);
});
// for (let element of num) {
//   console.log(element);
// }
