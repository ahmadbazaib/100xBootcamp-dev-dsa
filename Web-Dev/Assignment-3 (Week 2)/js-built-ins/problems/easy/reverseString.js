/*
  Write a function `reve` which takes a string as input and returns the reversed version of the string.

  What is reversing a string?
  - Reversing a string means rearranging its characters in the opposite order.

  Example:
  - Input: "Sumana"
  - Output: "anamuS"

  - Input: "hello"
  - Output: "olleh"

  - Input: ""
  - Output: ""

  Once you've implemented the logic, test your code by running
  - `npm run test-reverseString`
*/

function reverseString(str) {
  // Your code here
  const firstStr = [];
  for (let i = 0; i < str.length; i++) {
    firstStr.push(str[i]);
  }

  let revStr = [];

  for (let i = firstStr.length - 1; i >= 0; i--) {
    revStr.push(firstStr[i]);
  }

  revStr = revStr.join("");

  return revStr;
}

module.exports = reverseString;

console.log(reverseString("Sumana"));
