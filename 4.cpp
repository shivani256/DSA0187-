#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Book {
public:
    // Parameterized constructor to initialize book details
    Book(int id, string name, bool available = true) :
        id(id), name(name), available(available) {}

    // Function to print book details
    void print() {
        cout << "Book ID: " << id << endl;
        cout << "Book Name: " << name << endl;
        cout << "Available: " << (available ? "Yes" : "No") << endl;
    }

private:
    int id;
    string name;
    bool available;
};

class User {
public:
    // Parameterized constructor to initialize user details
    User(int regNo, string name) : regNo(regNo), name(name) {}

private:
    int regNo;
    string name;
};

int main() {
    stack<Book> books; // Stack to store books
    stack<User> users;  // Stack to store users

    // Add some book details
    books.push(Book(1, "The Lord of the Rings"));
    books.push(Book(2, "The Hitchhiker's Guide to the Galaxy"));
    books.push(Book(3, "Pride and Prejudice"));

    // Add some user details
    users.push(User(1001, "Alice"));
    users.push(User(1002, "Bob"));

    int choice;
    do {
        cout << "\nLibrary Management System:" << endl;
        cout << "1. Add Book Details" << endl;
        cout << "2. Add User Details" << endl;
        cout << "3. Check Book Availability" << endl;
        cout << "4. Distribute Book" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int id;
                string name;
                cout << "Enter Book ID: ";
                cin >> id;
                cout << "Enter Book Name: ";
                cin.ignore(); // Consume newline character
                getline(cin, name);
                books.push(Book(id, name));
                cout << "Book added successfully!" << endl;
                break;
            }
            case 2: {
                int regNo;
                string name;
                cout << "Enter User Registration Number: ";
                cin >> regNo;
                cout << "Enter User Name: ";
                cin.ignore(); // Consume newline character
                getline(cin, name);
                users.push(User(regNo, name));
                cout << "User added successfully!" << endl;
                break;
            }
            case 3: {
                int id;
                cout << "Enter Book ID to check availability: ";
                cin >> id;

                bool available = false;
                for (Book book : books) {
                    if (book.id == id && book.available) {
                        available = true;
                        break;
                    }
                }

                if (available) {
                    cout << "Book is available." << endl;
                } else {
                    cout << "Book is not available." << endl;
                }
                break;
            }
            case 4: {
                int bookId, userId;
                cout << "Enter Book ID to distribute: ";
                cin >> bookId;
                cout << "Enter User ID to distribute to: ";
                cin >> userId;

                bool success = false;
                for (Book &book : books) {
                    if (book.id == bookId && book.available) {
                        for (User &user : users) {
                            if (user.regNo == userId) {
                                book.available = false;
                                cout << "Book distributed successfully to " << user.name << "!" << endl;
                                success = true;
                                break;
                            }
                        }
                        break;
                    }
                }

                if (!success) {
                    cout << "Book distribution failed: Book not available or user not found." << endl;
                }
                break;
            }
            case 5:
                cout << "";

