#ifndef BOOKSTORE_HPP
#define BOOKSTORE_HPP

#include <string>
#include <vector>
#include "Book.hpp"

struct Bookstore {
    std::string name;
    std::string location;
    std::vector<Book> inventory;

    void addBook(const Book& book);
    Book* findBook(const std::string& identifier);
};

#endif // BOOKSTORE_H
