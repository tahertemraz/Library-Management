#include "Book.h"
using namespace std;

// Constructor definition: Initializes a Book object

Book::Book(string t, string a) {
    title = t;
    author = a;
}


// Compares two Book objects based on title and author

bool Book::operator==(const Book& other) const {
    return title == other.title && author == other.author;
}
