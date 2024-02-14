#include <iostream>
#include <string>

using namespace std;

string reverseString(const string& str) {
    string reversed;
    for (int i = str.size() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // Handle spaces

    string reversed = reverseString(str);
    cout << "Reversed string: " << reversed << endl;

    return 0;
}

