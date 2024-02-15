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

    // Calculate the sum of elements
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    // Calculate the average (using double to prevent integer division)
    double average = static_cast<double>(sum) / size;

    // Print the average
    std::cout << "The average of all elements in the array is: " << average << std::endl;

    return 0;
}

