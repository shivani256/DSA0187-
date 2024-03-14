#include <iostream>

using namespace std;

int main() {
    float PI = 3.14159; 
    float radius, vol;

    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    vol = 4/3*PI * radius * radius;

    cout << "The volume of the sphere with radius " << radius << " is: " << vol << endl;

    return 0;
}
