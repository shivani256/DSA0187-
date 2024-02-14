#include <iostream>
#include <string>

using namespace std;

class MyString {
public:
    string str;

    // Constructor to initialize the string
    MyString(string s) : str(s) {}

    // Overloaded operator+= to concatenate strings
    MyString& operator+=(const MyString& other) {
        str += other.str;
        return *this;  // Return a reference to the current object
    }

    // Function to print the string
    void print() {
        cout << str << endl;
    }
};

int main() {
    MyString str1("Hello ");
    MyString str2("World!");

    // Concatenate the strings using operator+=
    str1 += str2;

    // Print the concatenated string
    str1.print();  // Output: Hello World!

    return 0;
}

