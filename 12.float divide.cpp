#include <iostream>

using namespace std;

int main() {
    int integerNumber;
    float floatNumber;

    cout << "Enter an integer: ";
    cin >> integerNumber;
    cout << "Enter a float: ";
    cin >> floatNumber;

    float result = floatNumber / integerNumber;

    cout << "Result of float divided by integer: " << result << endl;

    return 0;
}

