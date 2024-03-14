#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (number & 1) {
        cout << number << " is an odd number." << endl;
    } else {
        cout << number << " is not an odd number." << endl;
    }

    return 0;
}

