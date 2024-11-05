#include "Bookstore.hpp"
#include <iostream>

// Add a book to the bookstore's inventory
void Bookstore::addBook(const Book& book) {
    inventory.push_back(book);
    std::cout << "Book added successfully: \n" << book << std::endl;
}

// Find a book by title or ISBN
Book* Bookstore::findBook(const std::string& identifier) {
    for (auto& book : inventory) {
        if (book.title == identifier || book.isbn == identifier) {
            return &book;
        }
    }
    std::cout << "Book not found!" << std::endl;
    return nullptr;
}
