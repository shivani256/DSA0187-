#include <iostream>
#include <cmath>

class Number {
public:
    // Constructor to initialize the number
    Number(int num) : value(num) {}

    // Check if the number is perfect
    bool isPerfect() {
        int sum = 0;
        for (int i = 1; i < value; ++i) {
            if (value % i == 0) {
                sum += i;
            }
        }
        return sum == value;
    }

    // Check if the number is Armstrong
    bool isArmstrong() {
        int original = value;
        int digits = 0;
        int temp = value;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        int sum = 0;
        temp = value;
        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }

        return sum == original;
    }

private:
    int value;
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    Number number(num);

    if (number.isPerfect()) {
        cout << num << " is a perfect number." << endl;
    } else {
        cout << num << " is not a perfect number." << endl;
    }

    if (number.isArmstrong()) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}

