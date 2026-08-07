/*
 * Write 3 different functions that return promises that resolve after t1, t2, and t3 seconds respectively.
 * Write a function that sequentially calls all 3 of these functions in order.
 * Return a promise chain which return the time in milliseconds it takes to complete the entire operation.
 * Compare it with the results from 3-promise-all.js
 */

function wait1(t) {
  return new Promise((resolve, _) => {
    setTimeout(resolve, t * 1000);
  });
}

function wait2(t) {
  return new Promise((resolve, _) => {
    setTimeout(resolve, t * 1000);
  });
}

function wait3(t) {
  return new Promise((resolve, _) => {
    setTimeout(resolve, t * 1000);
  });
}

function calculateTime(t1, t2, t3) {
  const start = Date.now();

  // const letsWait1 = await wait1(t1);
  // const letsWait2 = await wait2(t2);
  // const letsWait3 = await wait3(t3);

  return wait1(t1)
    .then(() => wait2(t2))
    .then(() => wait3(t3))
    .then(() => Date.now() - start);

  // return Date.now() - start;
}

calculateTime(1, 2, 3).then(console.log);

module.exports = calculateTime;
