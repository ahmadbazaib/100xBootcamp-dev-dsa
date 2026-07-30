/*
  Implement a function `isPalindrome` which takes a string as argument and returns true/false as its result.
  Note: the input string is case-insensitive which means 'Nan' is a palindrom as 'N' and 'n' are considered case-insensitive.

  Once you've implemented the logic, test your code by running
  - `npm run test-palindrome`
*/

function isPalindrome(str) {
  const strArrayOne = str.toLowerCase().split("");
  const strArrayTwo = [];
  let flag = false;

  for (let i = strArrayOne.length - 1; i >= 0; i--) {
    strArrayTwo.push(strArrayOne[i]);
  }

  const finalStrArrayOne = strArrayOne.join("").replace(/[^a-z0-9]/g, "");
  const finalStrArrayTwo = strArrayTwo.join("").replace(/[^a-z0-9]/g, "");

  console.log(finalStrArrayOne, finalStrArrayTwo);

  if (finalStrArrayOne === finalStrArrayTwo) {
    flag = true;
  }

  return flag;
}

module.exports = isPalindrome;

isPalindrome("Able, was I ere I saw Elba!");
