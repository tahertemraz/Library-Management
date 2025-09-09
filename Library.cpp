#include "Library.h"
#include <iostream>
using namespace std;

// Adds or updates book quantity in inventory (O(1) average case)
void Library::addBook(const string& title, int quantity) {
    inventory[title] += quantity; // O(1)
}


void Library::displayBooks() {// Lists all available books in the inventory
    cout << "Available books:\n";
    for (auto& pair : inventory) {
        cout << "- " << pair.first << " (Qty: " << pair.second << ")\n";
    }
}

bool Library::isAvailable(const string& title) {// Checks if a book is available to be borrowed
    return inventory.find(title) != inventory.end() && inventory[title] > 0;
}

void Library::requestBorrow(const string& username) {// Adds user to borrow queue (FIFO order)
    borrowQueue.push(username); // O(1)
    cout << username << " added to borrow queue.\n";
}

// Handles borrowing by taking the next user from queue and processing their request
void Library::processBorrow() {
    if (borrowQueue.empty()) {
        cout << "No pending borrow requests.\n";
        return;
    }

    string username = borrowQueue.front();
    borrowQueue.pop(); // O(1)

    cout << "Processing borrow for user: " << username << "\n";

   string bookTitle;
    cout << "Enter book title to borrow: ";
    cin.ignore();
    getline(cin, bookTitle);

    if (isAvailable(bookTitle)) {
        inventory[bookTitle]--; // O(1)
        cout << username << " successfully borrowed: " << bookTitle << "\n";
    }
    else {
        cout << "Book not available!\n";
    }
}
