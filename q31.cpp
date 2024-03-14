#include <iostream>

using namespace std;

void printFibonacciSequence(int n, int a = 0, int b = 1) {
    if (n > 0) {
        cout << a << " ";
        printFibonacciSequence(n - 1, b, a + b);
    }
}

int main() {
    int n;
    cout << "Enter the number of Fibonacci numbers to generate: ";
    cin >> n;

    cout << "Fibonacci sequence up to " << n << " numbers: ";
    printFibonacciSequence(n);

    return 0;
}

