/*
  Implement a function `calculateTotalSpentByCategory` which takes a list of transactions as parameter
  and return a list of objects where each object is unique category-wise and has total price spent as its value.
  Transaction - an object like { itemName, category, price, timestamp }.
  Output - [{ category1 - total_amount_spent_on_category1 }, { category2 - total_amount_spent_on_category2 }]

  Once you've implemented the logic, test your code by running
  - `npm run test-expenditure-analysis`
*/

function calculateTotalSpentByCategory(transactions) {
  const result = {};
  for (let i = 0; i < transactions.length; i++) {
    const category = transactions[i].category;
    const price = transactions[i].price;

    if (result[category]) {
      result[category] += price;
    } else {
      result[category] = price;
    }
  }

  const output = [];
  for (const [key, value] of Object.entries(result)) {
    output.push({
      category: key,
      totalSpent: value,
    });
  }

  return output;
}

module.exports = calculateTotalSpentByCategory;

const transactions = [
  {
    itemName: "Burger",
    category: "Food",
    price: 10,
    timestamp: 12345,
  },
  {
    itemName: "Pizza",
    category: "Food",
    price: 15,
    timestamp: 12346,
  },
  {
    itemName: "Shirt",
    category: "Clothing",
    price: 30,
    timestamp: 12347,
  },
];

console.log(calculateTotalSpentByCategory(transactions));
