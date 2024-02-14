#include <iostream>

using namespace std;

class MyClass {
public:
   // Default constructor that initializes x to 0
   MyClass() : x(0) {}

   // Parameterized constructor to set x to a specific value
   MyClass(int initialX) : x(initialX) {}

   // Function to print the value of x
   void printX() {
       cout << "x = " << x << endl;
   }

private:
   int x; // Member variable
};

int main() {
   // Create an object with the default constructor
   MyClass obj1;
   cout << "Default constructor:" << endl;
   obj1.printX(); // Output: x = 0

   // Create objects with different values using the parameterized constructor
   MyClass obj2(15);
   MyClass obj3(30);

   cout << "\nParameterized constructors:" << endl;
   obj2.printX(); // Output: x = 15
   obj3.printX(); // Output: x = 30

   return 0;
}

