// function isSubSum(arr, sum) {
//   let s = 0,
//     curr = 0;
//   for (let e = 0; e < arr.length; e++) {
//     curr += arr[e];
//     while (sum < curr) {
//       curr -= arr[s];
//       s++;
//     }
//     if (curr === sum) return true;
//   }
//   return false;
// }
// console.log(isSubSum([1, 4, 20, 3, 10, 5], 33));
