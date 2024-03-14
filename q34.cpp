#include <iostream>

using namespace std;

double area(double length, double width) {
    return length * width;
}

double area(double radius) {
    return 3.14159 * radius * radius;
}

double area(int base, int height) {
    return 0.5 * base * height;
}

int main() {
    cout << "Area of Rectangle (3 x 4): " << area(3, 4) << endl;
    cout << "Area of Circle (radius = 5): " << area(5) << endl;
    cout << "Area of Triangle (base = 6, height = 7): " << area(6, 7) << endl;

    return 0;
}

