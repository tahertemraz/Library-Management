# Library-Management
This project is a simple Library Management System built in C++ using OOP concepts and data structures. It allows users to manage books and borrowing requests efficiently through a console-based interface.
Key Features

Add and display available books with their quantities.

Request to borrow a book (added to a queue in FIFO order).

Process borrow requests and update inventory automatically.

Search and check book availability in real-time.

Data Structures Used

unordered_map → Stores books and their available quantities with O(1) average time complexity.

queue → Handles borrowing requests in order (FIFO).

Classes

Book → Represents book details (title, author).

Library → Manages inventory and borrow requests.

Complexity

unordered_map operations: O(1) average.

queue operations: O(1).

This project demonstrates C++ fundamentals, data structure implementation, and object-oriented design, making it a great starting point for building larger management systems.
