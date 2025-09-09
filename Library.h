#ifndef LIBRARY_H
#define LIBRARY_H
#include "Book.h"
#include <unordered_map>
#include <queue>
#include <string>
using namespace std;

class Library {
private:

    // Hash map to store book titles and available quantity (Data structure 1)
    unordered_map<string, int> inventory; // title -> quantity

    // Queue to manage borrowing requests in order (Data structure 2)
    queue<string> borrowQueue; // usernames

public:

    void addBook(const string& title, int quantity);// Adds a new book or increases quantity if already exists
    void displayBooks();// Displays all books with their available quantities
    void requestBorrow(const string& username);// User requests to borrow a book (added to queue)
    void processBorrow();// Process the borrow queue: asks user which book to borrow and updates inventory


    // Helper to check if a book is available
    bool isAvailable(const string& title);
};

#endif

