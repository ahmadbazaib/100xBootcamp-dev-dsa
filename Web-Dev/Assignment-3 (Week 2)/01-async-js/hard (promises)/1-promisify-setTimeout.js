/*
    Write a function that returns a promise that resolves after n seconds have passed, where n is passed as an argument to the function.
*/

// function wait(n) {
//     let p = new Promise((resolve) => {
//       setTimeout(() => {
//         resolve();
//       }, n * 1000);
//     });
//     return p;
//   }

function wait(n) {
  return new Promise((resolve) => {
    setTimeout(() => {
      resolve();
    }, n * 1000);
  });
}

module.exports = wait;

// const promise = new Promise(function (resolve, reject) {
//   resolve("Success!");
// });

// promise.then((result) => console.log(result));
