#include <iostream>

template<typename T>
T findMax(T arr[], int size) {
    T maxElement = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

int main() {
    int intArr[] = {1, 5, 3, 7, 2};
    float floatArr[] = {1.2, 3.5, 2.7, 4.8};
    double doubleArr[] = {2.5, 6.8, 4.2, 7.9};

    std::cout << "Maximum in integer array: " << findMax(intArr, 5) << std::endl;
    std::cout << "Maximum in float array: " << findMax(floatArr, 4) << std::endl;
    std::cout << "Maximum in double array: " << findMax(doubleArr, 4) << std::endl;

    return 0;
}

