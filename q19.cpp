#include <iostream>

using namespace std;

class Complex {
private:
    double real;
    double imag;

public:

    Complex(double real = 0.0, double imag = 0.0) : real(real), imag(imag) {}

    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }
    void display() const {
        cout << "(" << real << " + " << imag << "i)" << endl;
    }
};

int main() {
    Complex num1(2.0, 3.0);
    Complex num2(1.0, -1.0);

    Complex sum = num1 + num2;
    Complex diff = num1 - num2;

    cout << "Sum: ";
    sum.display();

    cout << "Difference: ";
    diff.display();

    return 0;
}

