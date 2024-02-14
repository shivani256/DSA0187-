#include <iostream>
#include <string>
#include <cctype> // For character manipulation

using namespace std;

bool isPalindrome(const string& str) {
    int len = str.length();

    // Handle empty strings and strings with a single character
    if (len == 0 || len == 1) {
        return true;
    }

    // Convert characters to lowercase for case-insensitive comparison
    string lowerStr;
    lowerStr.reserve(len); // Optimize memory allocation
    for (char c : str) {
        lowerStr += tolower(c);
    }

    // Use two pointers starting from the beginning and end, moving inwards
    int left = 0, right = len - 1;
    while (left < right) {
        // Skip non-alphanumeric characters
        while (!isalnum(lowerStr[left]) && left < right) {
            left++;
        }
        while (!isalnum(lowerStr[right]) && left < right) {
            right--;
        }

        if (lowerStr[left] != lowerStr[right]) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // Handle spaces

    if (isPalindrome(str)) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}

