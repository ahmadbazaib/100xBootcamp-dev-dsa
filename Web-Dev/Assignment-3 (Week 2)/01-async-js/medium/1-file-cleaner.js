// ## File cleaner
// Read a file, remove all the extra spaces and write it back to the same file.

// For example, if the file input was
// ```
// hello     world    my    name   is       raman
// ```

// After the program runs, the output should be

// ```
// hello world my name is raman
// ```

const fs = require("node:fs");

let newData = null;

fs.readFile("text.txt", "UTF8", (_, data) => {
  newData = data.replace(/\s+/g, " ").trim();
  fs.writeFile("text.txt", newData, "UTF8", (err) => {
    if (err) {
      console.log("Error");
    } else {
      console.log("File written Successfully");
    }
  });
});
