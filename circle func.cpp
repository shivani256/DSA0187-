#include <iostream>
#include <cmath>

using namespace std;

double circleArea(double radius) {
    if (radius < 0) {
        throw runtime_error("Radius cannot be negative.");
    }
    return M_PI * radius * radius; // Use the mathematical constant PI
}

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    try {
        double area = circleArea(radius);
        cout << "Area of the circle: " << area << endl;
    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}

