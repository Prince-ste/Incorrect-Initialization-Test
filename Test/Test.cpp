#include <iostream>
#include "Book.h"

void sortBooks(Book books[], int size);
void printBooks(Book books[], int size);

void printBooks(Book books[], int size) {
    for (int i = 0; i < size; ++i) {
        books[i].displayBookDetails();
        std::cout << "--------------------------\n";
    }
}

int main() {
    Book correctBook1, correctBook2, correctBook3;
    correctBook1.setBookDetails("The Catcher in the Rye", "J.D. Salinger", "978-0316769488", true, "2024-11-20");
    correctBook2.setBookDetails("To Kill a Mockingbird", "Harper Lee", "978-0061120084", true, "2024-11-19");
    correctBook3.setBookDetails("1984", "George Orwell", "978-0451524935", true, "2024-11-18");

    Book booksAsc[3] = { correctBook1, correctBook2, correctBook3 };
    Book booksDesc[3] = { correctBook3, correctBook2, correctBook1 };
    Book booksMixed[3] = { correctBook2, correctBook1, correctBook3 };

    // Incorrect Initialization Examples
    Book incorrectBook1;
    incorrectBook1.setBookDetails("", "George Orwell", "978-0451524935", true, "2024-11-18"); // Empty title

    Book incorrectBook2;
    incorrectBook2.setBookDetails("1984", "George Orwell", "XYZ-12345", true, "2024-11-18"); // Invalid ISBN

    Book incorrectBook3;
    incorrectBook3.setBookDetails("The Great Gatsby", "", "978-0743273565", true, "2024-11-18"); // Missing author

    Book incorrectBook4;
    incorrectBook4.setBookDetails("The Catcher in the Rye", "J.D. Salinger", "978-0316769488", true, ""); // Missing date added

    Book incorrectBook5;
    incorrectBook5.setBookDetails("To Kill a Mockingbird", "Harper Lee", "978-0061120084", 2, "2024-11-18"); // Invalid availability

    // Display the incorrect books
    std::cout << "Displaying incorrect book details:\n";
    std::cout << "\nIncorrect Book 1:\n";
    incorrectBook1.displayBookDetails();

    std::cout << "\nIncorrect Book 2:\n";
    incorrectBook2.displayBookDetails();

    std::cout << "\nIncorrect Book 3:\n";
    incorrectBook3.displayBookDetails();

    std::cout << "\nIncorrect Book 4:\n";
    incorrectBook4.displayBookDetails();

    std::cout << "\nIncorrect Book 5:\n";
    incorrectBook5.displayBookDetails();

    std::cout << "Books in Mixed Order:\n";
    printBooks(booksMixed, 3);

    std::cout << "\nSorting Mixed Books:\n";
    sortBooks(booksMixed, 3);
    printBooks(booksMixed, 3);

    return 0;
}
