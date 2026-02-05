"use strict";

// VARIABLES: Assignment
let color = "Green";
let height = 182.5;
let likePizza = true;

console.log(color, height, likePizza);

// FUNCTIONS:
// Assignment #1
function add(num1, num2) {
  return num1 + num2;
}
function sub(num1, num2) {
  return num1 - num2;
}

console.log(add(10, 20));
console.log(add("10", "20"));
console.log(sub("10", "20"));

// Assignment #2
const canVote = function (age) {
  if (age >= 18) return true;
  else return false;
};

console.log(canVote(18));
console.log(canVote(55));
console.log(canVote(12));
// console.log(canVote()); //false

// IF/ELSE: Assignment
const number = 17;
if (number % 2 == 0) {
  console.log("The number is even");
} else {
  console.log("The number is odd");
}

// LOOPS: Assignment
let sum = 0;
function nNumber(num) {
  for (let i = 1; i <= num; i++) {
    sum += i;
  }

  return sum;
}

console.log(nNumber(2));
console.log(nNumber(10));
console.log(nNumber(12));
