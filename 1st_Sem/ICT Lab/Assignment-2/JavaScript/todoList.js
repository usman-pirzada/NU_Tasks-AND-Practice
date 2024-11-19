// Import the prompt-sync module
const prompt = require('prompt-sync')();

// Initialize an empty array for the to-do list
let todoList = [];

// Function to add a task
function addTask() {
    const task = prompt("Enter the task: ");
    todoList.push(task);
    console.log(`Task added: "${task}"`);
}

// Function to remove a task
function removeTask() {
    const index = parseInt(prompt("Enter the index of the task to remove: ")) - 1;
    if (index >= 0 && index < todoList.length) {
        const removed = todoList.splice(index, 1);
        console.log(`Task removed: "${removed[0]}"`);
    } else {
        console.log("Invalid index. Please try again.");
    }
}

// Function to display all tasks
function displayTasks() {
    if (todoList.length === 0) {
        console.log("The to-do list is empty.");
    } else {
        console.log("To-Do List:");
        todoList.forEach((task, index) => {
            console.log(`${index + 1}. ${task}`);
        });
    }
}

// Function to clear all tasks
function clearTasks() {
    todoList = [];
    console.log("All tasks have been cleared.");
}

// Main loop for user interaction
while (true) {
    console.log("\nChoose an action: add, remove, view, clear, exit");
    const command = prompt("Enter your command: ").toLowerCase();

    if (command === "add") {
        addTask();
    } else if (command === "remove") {
        removeTask();
    } else if (command === "view") {
        displayTasks();
    } else if (command === "clear") {
        clearTasks();
    } else if (command === "exit") {
        console.log("Goodbye!");
        break;
    } else {
        console.log("Invalid command. Please try again.");
    }
}