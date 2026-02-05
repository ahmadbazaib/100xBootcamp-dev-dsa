"use strict";

// OBJECTS:
// Assignment #1

function person(userName, userAge) {
  return console.log("Hi " + userName + ", your age is " + userAge); // returns undefined, the console.log prints the message and the return value is undefined
}

function person1(userName, userAge) {
  console.log("Hi " + userName + ", your age is " + userAge); //automatically return undefined
}

function person2(userName, userAge) {
  return "Hi " + userName + ", your age is " + userAge;
}

person("Jinwoo", 24);
person1("Jinwoo", 24);
console.log(person2("Jinwoo", 24));

// Assignment #2
function legalVoteAge(age) {
  if (age >= 18) {
    return true;
  } else {
    return false;
  }
}

function objectPerson(user) {
  // const info = `Hi ${user.gender == "Male" ? "Mr." : "Ms."} ${user.name}, your age is ${user.age}. You are ${user.age >= 18 ? "allowed" : "not allowed"} to vote`; //Used template literal here
  const info = `Hi ${user.gender == "Male" ? "Mr." : "Ms."} ${user.name}, your age is ${user.age}. You are ${legalVoteAge(user.age) == true ? "allowed" : "not allowed"} to vote`;
  return info;
}

const personJinwo = {
  name: "Jinwoo",
  age: 24,
  gender: "Male",
};

const personClove = {
  name: "Clove",
  age: 21,
  gender: "Female",
};

const personBreach = {
  name: "Breach",
  age: 14,
  gender: "Male",
};

console.log(objectPerson(personJinwo));
console.log(objectPerson(personClove));
console.log(objectPerson(personBreach));

// ARRAYS: Assignment
function arrayNumbers(num) {
  let evenArray = [];
  for (let i = 0; i < num.length; i++) {
    if (num[i] % 2 == 0) {
      evenArray.push(num[i]);
    }
  }

  return evenArray;
}

const num = [1, 2, 4, 6, 8, 9, 10];

console.log(arrayNumbers(num));

function getEvenNumbers(num) {
  return num.filter((num) => num % 2 == 0); //ARROW FUNCTION USED HERE
}

console.log(getEvenNumbers(num));

// ARRAY OF OBJECTS: Assignment
const users = [
  {
    name: "Jinwoo",
    age: 24,
  },
  {
    name: "Clove",
    age: 21,
  },
  {
    name: "Breach",
    age: 14,
  },
];

console.log(users[0].age);

// function legalVote(users) {
//   let newArray = [];
//   for (let i = 0; i < users.length; i++) {
//     if (users[i].age >= 18) newArray.push(users[i]);
//   }

//   return newArray;
// }

function legalVote(users) {
  return users.filter((users) => users.age >= 18);
}
console.log(legalVote(users));
