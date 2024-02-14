#include <iostream>
#include <string>

using namespace std;

int countElements(const string& str) {
    return str.length(); // Use the built-in `length()` function
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // Handle spaces

    int count = countElements(str);
    cout << "Number of elements in the string: " << count << endl;

    return 0;
}

