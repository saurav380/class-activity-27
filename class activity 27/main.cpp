#include <iostream>
#include "Bookstore.hpp"

int main() {
    // Initialize bookstore
    Bookstore store;
    store.name = "City Bookstore";
    store.location = "123 Main Street";

    // Create some books
    Book book1 = { "The Great Gatsby", "F. Scott Fitzgerald", "1234567890", 10.99 };
    Book book2 = { "1984", "George Orwell", "0987654321", 8.99 };

    // Add books to the bookstore
    store.addBook(book1);
    store.addBook(book2);

    // Search for a book by title
    std::string searchTitle = "1984";
    Book* foundBook = store.findBook(searchTitle);
    if (foundBook) {
        std::cout << "Book found:\n" << *foundBook << std::endl;
    }

    // Search for a book by ISBN
    std::string searchISBN = "1234567890";
    foundBook = store.findBook(searchISBN);
    if (foundBook) {
        std::cout << "Book found:\n" << *foundBook << std::endl;
    }

    return 0;
}
