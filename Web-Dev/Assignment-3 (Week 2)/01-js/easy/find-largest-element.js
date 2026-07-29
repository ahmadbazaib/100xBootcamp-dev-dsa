/*
  Write a function `findLargestElement` that takes an array of numbers and returns the largest element.
  Example:
  - Input: [3, 7, 2, 9, 1]
  - Output: 9
*/

function findLargestElement(numbers) {
  let num = -Infinity;

  for (const el of numbers) {
    if (el >= num) {
      num = el;
    }
  }

  if (num === -Infinity) {
    return undefined;
  } else {
    return num;
  }
}

module.exports = findLargestElement;

console.log(findLargestElement([]));
