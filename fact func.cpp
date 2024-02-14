#include <iostream>

using namespace std;

long long factorial(int n) {
    if (n < 0) {
        throw runtime_error("Factorial is not defined for negative numbers.");
    } else if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1); // Recursive approach for efficiency
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    try {
        long long result = factorial(num);
        cout << "Factorial of " << num << " is " << result << endl;
    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}

