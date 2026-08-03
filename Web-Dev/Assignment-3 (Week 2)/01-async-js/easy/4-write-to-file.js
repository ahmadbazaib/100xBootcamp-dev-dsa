// ## Write to a file

// Using the fs library again, try to write to the contents of a file.
// You can use the fs library to as a black box, the goal is to understand async tasks.

const fs = require("node:fs");

fs.writeFile("text.txt", "Hello World", "UTF8", (err) => {
  if (err) {
    throw new Error("err");
  } else {
    console.log("File Written Successfully");
  }
});

const buffer = Buffer.from("Hello");

console.log(buffer);

fs.appendFile("text.txt", "\nHello World", (err) => {
  if (err) {
    console.log(err);
    return;
  }

  console.log("Appended!");
});

fs.readFile("text.txt", "UTF8", (_, data) => {
  console.log(data);
});
