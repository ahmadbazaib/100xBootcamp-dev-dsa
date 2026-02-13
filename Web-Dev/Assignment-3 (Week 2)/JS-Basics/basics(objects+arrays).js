"use strict";

////////////////////////////////////////////
// 1. Sum values in object arrays

// const expenses = { food: [10, 20, 30], travel: [5, 15], bills: [40, 60] };

// const result = {};

// for (const [key, value] of Object.entries(expenses)) {
//   result[key] = value.reduce((acc, n) => acc + n, 0);
// }

// console.log(result);

////////////////////////////////////////////
// 2. Count word occurrences in array

// const data = ["apple", "banana", "apple", "orange", "banana", "apple"];

// const counts = {};

// for (const word of data) {
//   if (counts[word]) {
//     counts[word]++;
//   } else {
//     counts[word] = 1;
//   }
// }

// console.log(counts);

////////////////////////////////////////////
// 3. Swap keys and values of object

// const data = { a: "x", b: "y", c: "z" };

// const result = {};

// for (const [key, value] of Object.entries(data)) {
//   // console.log(key, value);
//   result[value] = key;
// }

// console.log(result);

////////////////////////////////////////////
// 4. Find the largest value key

// const data = { a: 10, b: 50, c: 20 };

// let maxValue = 0;
// let maxKey = null;

// for (const [key, value] of Object.entries(data)) {
//   if (value >= maxValue) {
//     maxValue = value;
//     maxKey = key;
//   }
// }

// console.log(maxKey);

////////////////////////////////////////////
// 5. Flatten object of arrays into one array

// const data = { fruits: ["apple", "banana"], veggies: ["carrot", "pea"] };

// const [valueOne, valueTwo] = Object.values(data);

// const finalArr = [...valueOne, ...valueTwo];

// //Modern Way
// // const finalArr = Object.values(data).flat();

// console.log(finalArr);

////////////////////////////////////////////
// 6. Group people by city

// const data = [
//   { name: "A", city: "Delhi" },
//   { name: "B", city: "Mumbai" },
//   { name: "C", city: "Delhi" },
// ];

// const result = {};

// for (const value of Object.values(data)) {
//   // actual storage location
//   if (result[value.city]) {
//     result[value.city].push(value.name);
//   } else {
//     result[value.city] = [value.name];
//   }
// }

// console.log(result);

////////////////////////////////////////////
// 7. Filter object by values > 50

// const data = { a: 20, b: 60, c: 40, d: 90 };

// const result = {};

// for (const [key, value] of Object.entries(data)) {
//   if (value > 50) {
//     result[key] = value;
//   }
// }

// console.log(result);

////////////////////////////////////////////
// 8. Find student with highest average mark

// const data = { A: [80, 90], B: [70, 75, 85] };

// const result = {};

// for (const [key, value] of Object.entries(data)) {
//   result[key] = value.reduce((acc, cur) => acc + cur, 0) / value.length;
// }

// let maxValue = 0;
// let maxKey = null;

// for (const [key, value] of Object.entries(result)) {
//   if (value > maxValue) {
//     maxValue = value;
//     maxKey = key;
//   }
// }

// console.log(maxKey);

////////////////////////////////////////////
// 9. Unique values across all object arrays

// const data = { x: [1, 2, 3], y: [2, 3, 4], z: [4, 5] };

// const result = Object.values(data).flat();

// const uniqueResult = [...new Set(result)];

// console.log(uniqueResult);

////////////////////////////////////////////
// 10. Pick only given keys from object

const obj = { name: "Rahul", age: 23, city: "Noida" };
const keys = ["name", "city"];

const result = {};

for (const key of keys) {
  if (key in obj) {
    result[key] = obj[key];
  }
}

console.log(result);
