#ifndef BOOK_H
#define BOOK_H
#include <string>
using namespace std;
class Book {
public:
    string title;
    string author;

    // Constructor to initialize book with title and author
    Book(string t, string a);

    // Overload equality operator to compare two books
    bool operator==(const Book& other) const;
};

#endif

