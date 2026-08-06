/*
 * Write a function that halts the JS thread (make it busy wait) for a given number of milliseconds.
 * During this time the thread should not be able to do anything else.
 * the function should return a promise just like before
 */

// function sleep(milliseconds) {
//   return new Promise((resolve) => setTimeout(resolve, milliseconds));
// }

function sleep(milliseconds) {
  const now = Date.now();

  while (Date.now() - now < milliseconds) {
    // Keeping the js thread busy;
  }

  return Promise.resolve();
}

sleep(1000);

module.exports = sleep;
