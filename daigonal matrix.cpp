#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter the size of the square matrix: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input: Matrix size must be positive." << endl;
        return 1;
    }

    int matrix[n][n];

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int majorDiagonalSum = 0, minorDiagonalSum = 0;

    // Calculate the sum of the primary (major) diagonal
    for (int i = 0; i < n; i++) {
        majorDiagonalSum += matrix[i][i];
    }

    // Calculate the sum of the secondary (minor) diagonal
    for (int i = 0; i < n; i++) {
        minorDiagonalSum += matrix[i][n - i - 1];
    }

    cout << "Sum of primary diagonal: " << majorDiagonalSum << endl;
    cout << "Sum of secondary diagonal: " << minorDiagonalSum << endl;

    return 0;
}

