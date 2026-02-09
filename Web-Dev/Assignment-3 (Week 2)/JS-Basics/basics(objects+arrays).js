"use strict";

// 1. Sum values in object arrays

// Input
const expenses = { food: [10, 20, 30], travel: [5, 15], bills: [40, 60] };

// const cost = [];
const values = Object.values(expenses);

console.log([...values]);

for (let i = 0; i < values.length; i++) {
  const finalValues = [[...values[i]]];
}
