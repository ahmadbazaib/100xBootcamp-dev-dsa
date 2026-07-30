/*
  Implement a function `countVowels` that takes a string as an argument and returns the number of vowels in the string.
  Note: Consider both uppercase and lowercase vowels ('a', 'e', 'i', 'o', 'u').

  Once you've implemented the logic, test your code by running 'npm run test-count-vowels'
*/

function countVowels(str) {
  // Your code here
  let count = 0;
  const finalStr = str.toLowerCase();
  for (let i = 0; i < str.length; i++) {
    if (
      finalStr[i] === "a" ||
      finalStr[i] === "e" ||
      finalStr[i] === "i" ||
      finalStr[i] === "o" ||
      finalStr[i] === "u"
    ) {
      count++;
    }
  }

  return count;
}

module.exports = countVowels;

console.log(countVowels("hello"));
