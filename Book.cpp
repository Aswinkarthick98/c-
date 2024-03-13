// Book.cpp

#include "Book.h"
#include <iomanip>
#include <sstream>

Book::Book() : id(0), title(""), author(""), status("Available") {}

Book::Book(int id, const std::string& title, const std::string& author, const std::string& status)
    : id(id), title(title), author(author), status(status) {}

int Book::getId() const {
    return id;
}

std::string Book::getTitle() const {
    return title;
}

std::string Book::getAuthor() const {
    return author;
}

std::string Book::getStatus() const {
    return status;
}

void Book::setStatus(const std::string& newStatus) {
    status = newStatus;
}

std::string Book::toJson() const {
    std::ostringstream oss;
    oss << "{"
        << "\"id\":" << id << ","
        << "\"title\":\"" << title << "\","
        << "\"author\":\"" << author << "\","
        << "\"status\":\"" << status << "\""
        << "}";
    return oss.str();
}

void Book::fromJson(const std::string& json) {
    // Implement deserialization logic if needed
}

std::ostream& operator<<(std::ostream& os, const Book& book) {
    os << std::setw(5) << book.getId() << std::setw(30) << book.getTitle()
       << std::setw(20) << book.getAuthor() << std::setw(15) << book.getStatus();
    return os;
}

std::istream& operator>>(std::istream& is, Book& book) {
    // Implement custom input logic if needed
    return is;
}
