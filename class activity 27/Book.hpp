#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>
#include <iostream>

struct Book {
    std::string title;
    std::string author;
    std::string isbn;
    double price;

    // Overload equality operator to compare books by ISBN
    bool operator==(const Book& other) const {
        return isbn == other.isbn;
    }

    // Overload stream insertion operator for easy output
    friend std::ostream& operator<<(std::ostream& os, const Book& book) {
        os << "Title: " << book.title << "\n"
            << "Author: " << book.author << "\n"
            << "ISBN: " << book.isbn << "\n"
            << "Price: $" << book.price;
        return os;
    }
};

#endif // BOOK_H
