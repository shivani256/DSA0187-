#include <iostream>
#include <limits>

using namespace std;

pair<int, int> findMinMax(const int arr[], int n) {
    if (n == 0) {
        throw runtime_error("Array is empty.");
    }

    int minVal = numeric_limits<int>::max(); // Initialize with max value
    int maxVal = numeric_limits<int>::min(); // Initialize with min value

    for (int i = 0; i < n; i++) {
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    return {minVal, maxVal};
}

int main() {
    int arr[] = {5, 2, 8, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    try {
        pair

