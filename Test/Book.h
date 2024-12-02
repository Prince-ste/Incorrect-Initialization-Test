#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

class Book {
private:
    std::string title;
    std::string author;
    std::string isbn;
    bool availability;
    std::string dateAdd;

public:
    Book();
    void setBookDetails(const std::string& title, const std::string& author, const std::string& isbn, bool availability, const std::string& dateAdd);
    void displayBookDetails() const;
    bool borrowBook();
    void returnBook();
    bool isAvailable() const;
    std::string getDateAdd() const;
    std::string getTitle() const;
    bool operator < (const Book& b) const;
};

#endif // BOOK_H

