#include "Library.h"
#include <iostream>
using namespace std;

int main() {
    Library myLibrary;
    myLibrary.addBook("C++ Programming", 3);// Add books to library 
    myLibrary.addBook("Data Structures", 2);// Add books to library 
    int choice;
    string username;

    do {
        cout << "\n--- Library Menu ---\n";
        cout << "1. Show books\n";
        cout << "2. Request to borrow book\n";
        cout << "3. Process borrow request\n";
        cout << "4. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            myLibrary.displayBooks();
            break;
        case 2:
            cout << "Enter your username: ";
            cin >> username;
            myLibrary.requestBorrow(username);
            break;
        case 3:
            myLibrary.processBorrow();
            break;
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}
