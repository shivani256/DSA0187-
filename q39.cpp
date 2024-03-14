#include <iostream>

// Function pointer type for callback
typedef void (*CallbackFunction)(int);

// Function that takes a callback function as an argument and calls it
void performOperation(int data, CallbackFunction callback) {
    std::cout << "Performing operation with data: " << data << std::endl;
    // Perform some operation
    if (callback != nullptr) {
        callback(data);
    }
}

// Callback function
void callbackFunction(int result) {
    std::cout << "Callback function called with result: " << result << std::endl;
}

int main() {
    performOperation(10, callbackFunction);
    return 0;
}

