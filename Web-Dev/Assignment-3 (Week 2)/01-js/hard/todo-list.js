/*
  Implement a class `Todo` having below methods
    - add(todo): adds todo to list of todos
    - remove(indexOfTodo): remove todo from list of todos
    - update(index, updatedTodo): update todo at given index
    - getAll: returns all todos
    - get(indexOfTodo): returns todo at given index
    - clear: deletes all todos

  Once you've implemented the logic, test your code by running
  - `npm run test-todo-list`
*/

class Todo {
  constructor() {
    this.todo = [];
  }

  add(todo) {
    this.todo.push(todo);
  }

  remove(indexOfTodo) {
    if (this.todo[indexOfTodo]) {
      this.todo.splice(indexOfTodo, 1);
    }
  }

  // index >= 0 && index < this.todo.length -> more robust version
  update(index, updatedTodo) {
    if (this.todo[index]) {
      this.todo[index] = updatedTodo;
    }
  }

  getAll() {
    return this.todo;
  }

  get(indexOfTodo) {
    if (!this.todo[indexOfTodo]) {
      return null;
    } else {
      return this.todo[indexOfTodo];
    }
  }

  clear() {
    this.todo = [];
  }
}

module.exports = Todo;
