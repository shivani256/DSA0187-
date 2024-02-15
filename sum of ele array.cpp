#include <iostream>

int main() {
    int size;

    // Get array size from the user
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Validate array size (positive)
    if (size <= 0) {
        std::cerr << "Error: Array size must be positive." << std::endl;
        return 1;
    }

    // Declare the array based on data type
    int arr[size]; // Adjust element type if needed (e.g., double, char)

    // Get array elements from the user
    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    // Calculate the sum using an iterative approach
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    // Print the sum
    std::cout << "The sum of all elements in the array is: " << sum << std::endl;

    return 0;
}

