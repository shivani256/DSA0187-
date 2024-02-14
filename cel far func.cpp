#include <iostream>

using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    char choice;
    double value, result;

    cout << "Enter (c) to convert Celsius to Fahrenheit or (f) to convert Fahrenheit to Celsius: ";
    cin >> choice;

    cout << "Enter the value: ";
    cin >> value;

    switch (choice) {
        case 'c':
            result = celsiusToFahrenheit(value);
            cout << value << "°C is equal to " << result << "°F." << endl;
            break;
        case 'f':
            result = fahrenheitToCelsius(value);
            cout << value << "°F is equal to " << result << "°C." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}

