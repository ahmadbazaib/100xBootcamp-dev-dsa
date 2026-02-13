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

// const obj = { name: "Rahul", age: 23, city: "Noida" };
// const keys = ["name", "city"];

// const result = {};

// for (const key of keys) {
//   if (key in obj) {
//     result[key] = obj[key];
//   }
// }

// console.log(result);

////////////////////////////////////////////
// 11. Find student with highest average marks

// const data = { A: [80, 90], B: [70, 75, 85] };

// const result = {};

// for (const [key, value] of Object.entries(data)) {
//   result[key] = value.reduce((acc, el) => acc + el, 0) / value.length;
// }

// let maxValue = -Infinity;
// let maxKey = null;

// // console.log(result);

// for (const [key, value] of Object.entries(result)) {
//   if (value >= maxValue) {
//     maxValue = value;
//     maxKey = key;
//   }
// }

// console.log(maxKey);

////////////////////////////////////////////
// 12. Sort object entries by values (ascending)

// const data = { a: 3, b: 1, c: 2 };

// const result = [];

// for (const [key, value] of Object.entries(data)) {
//   result.push([key, value]);
// }

// result.sort(function (a, b) {
//   // console.log("Comparing", a, "and", b);
//   return a[1] - b[1];
// });

// console.log(result);

////////////////////////////////////////////
// 13. Count number of keys in object

// const data = { a: 1, b: 2, c: 3 };

// let count = 0;

// for (const key of Object.keys(data)) {
//   if (key) {
//     count++;
//   }
// }

// console.log(count);

////////////////////////////////////////////
// 14. Capitalize string values inside object

// const data = { name: "alice", city: "delhi" };

// const result = {};

// for (const [key, value] of Object.entries(data)) {
//   result[key] = value.toUpperCase();
// }

// console.log(result);

////////////////////////////////////////////
// 15. Convert object to query string

// const data = { name: "Alice", age: 25 };

// let result = [];

// for (const [key, value] of Object.entries(data)) {
//   result[key] = `${key}=${value}`;
// }

// // const queryString = Object.entries(data)
// //   .map(([key, value]) => `${key}=${value}`)
// //   .join("&");

// // console.log(queryString);

// const dataStr = Object.values(result);

// const [valueOne, valueTwo] = dataStr;

// console.log(`${valueOne}&${valueTwo}`);

////////////////////////////////////////////
// 16. Count even and odd numbers in array

// const data = [1, 2, 3, 4, 5, 6];

// const result = { even: 0, odd: 0 };

// for (const el of data) {
//   if (el % 2 === 0) {
//     result.even++;
//   } else {
//     result.odd++;
//   }
// }

// console.log(result);

////////////////////////////////////////////
// 17. Find common keys between two objects

// const dataOne = { a: 1, b: 2, c: 3 };
// const dataTwo = { b: 4, c: 5, d: 6 };

// const result = [];

// for (const key of Object.keys(dataOne)) {
//   if (key in dataTwo) {
//     result.push(key);
//   }
// }

// console.log(result);

////////////////////////////////////////////
// 18. Convert array of objects to lookup by id

// const data = [
//   { id: 1, name: "A" },
//   { id: 2, name: "B" },
// ];

// const result = {};

// for (const item of data) {
//   result[item.id] = item;
// }

// console.log(result);

////////////////////////////////////////////
// 19. Check if all values in object are numbers

const data = { a: 1, b: "hello", c: 3 };

let flag = true;

for (const value of Object.values(data)) {
  if (typeof value !== "number") {
    flag = false;
    break;
  }
}

console.log(flag);
