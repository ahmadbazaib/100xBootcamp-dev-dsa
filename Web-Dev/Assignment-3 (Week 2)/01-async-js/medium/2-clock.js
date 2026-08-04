// Using `1-counter.md` or `2-counter.md` from the easy section, can you create a
// clock that shows you the current machine time?

// Can you make it so that it updates every second, and shows time in the following formats -

//  - HH:MM::SS (Eg. 13:45:23)

//  - HH:MM::SS AM/PM (Eg 01:45:23 PM)

function displayTime() {
  const now = new Date();
  const hours24 = now.getHours();
  const hours12 = String(hours24 % 12 || 12).padStart(2, "0");
  const minutes = String(now.getMinutes()).padStart(2, "0");
  const seconds = String(now.getSeconds()).padStart(2, "0");

  // console.log(
  //   `${hours12}:${minutes}:${seconds} ${hours24 >= 12 ? "PM" : "AM"}`,
  // );

  process.stdout.write(
    `\r${hours12}:${minutes}:${seconds} ${hours24 >= 12 ? "PM" : "AM"}`,
  );
}

displayTime();
setInterval(displayTime, 1000);
