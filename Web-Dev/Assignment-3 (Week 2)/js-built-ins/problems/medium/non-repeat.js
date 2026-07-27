/*
  Write a function `nonrepeat` which takes a string as input and returns the first non-repeating character in the string.

  What is a non-repeating character?
  - A character that appears only once in the entire string.

  Example:
  - Input: "abcab"
  - Output: "c"

  - Input: "aabbcc"
  - Output: null

  - Input: "abcdef"
  - Output: "a"

  - Input: ""
  - Output: null

  Once you've implemented the logic, test your code by running
  - `npm run test-nonrepeat`
*/
function nonrepeat(str) {
  // Your code here
  const upper = str.split("");
  const nonRepeat = upper.filter(
    (ele) => upper.indexOf(ele) === upper.lastIndexOf(ele),
  );

  if (nonRepeat.length === 0) {
    return null;
  } else {
    return nonRepeat[0];
  }
}
module.exports = nonrepeat;

console.log(nonrepeat("a!b@c#d$a"));
