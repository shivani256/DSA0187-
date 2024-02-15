#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Method 1: Concatenation (simple combining)
template <typename T>
vector<T> mergeArraysConcatenation(const vector<T>& arr1, const vector<T>& arr2) {
    vector<T> merged(arr1.size() + arr2.size());

    copy(arr1.begin(), arr1.end(), merged.begin());
    copy(arr2.begin(), arr2.end(), merged.begin() + arr1.size());

    return merged;
}

// Method 2: Two-pointer approach (efficient for sorted arrays)
template <typename T>
vector<T> mergeArraysTwoPointers(const vector<T>& arr1, const vector<T>& arr2) {
    // Check if either array is empty
    if (arr1.empty()) {
        return arr2;
    }
    if (arr2.empty()) {
        return arr1;
    }

    vector<T> merged;
    int i = 0, j = 0;

    // Compare elements from both arrays until one is exhausted
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] <= arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        } else {
            merged.push_back(arr2[j]);
            j++;
        }
    }

    // Add remaining elements from the non-exhausted array
    merged.insert(merged.end(), arr1.begin() + i, arr1.end());
    merged.insert(merged.end(), arr2.begin() + j, arr2.end());

    return merged;
}

// Method 3: std::merge function (generic and efficient)
template <typename T>
vector<T> mergeArraysStdMerge(const vector<T>& arr1, const vector<T>& arr2) {
    vector<T> merged(arr1.size() + arr2.size());

    // Use std::merge to merge elements in-place
    merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), merged.begin());

    return merged;
}

int main() {
    // Example usage: Choose the method that best suits your needs

    // Concatenation:
    vector<int> arr1 = {1, 3, 5};
    vector<int> arr2 = {2, 4, 6};
    vector<int> merged = mergeArraysConcatenation(arr1, arr2);

    // Two-pointer approach (for sorted arrays):
    vector<int> arr3 = {2, 5, 8};
    vector<int> arr4 = {1, 3, 7};
    vector<int> merged2 = mergeArraysTwoPointers(arr3, arr4);

    // std::merge function:
    vector<string> arr5 = {"apple", "banana"};
    vector<string> arr6 = {"mango", "orange"};
    vector<string> merged3 = mergeArraysStdMerge(arr5, arr6);

    // Print the merged arrays
    for (int num : merged) {
        cout << num << " ";
    }
    cout << endl;

    for (int num : merged2) {
        cout << num << " ";
    }
    cout << endl;

    for (const string& fruit : merged3) {
        cout << fruit << " ";
    }
    cout << endl;

    return 0;
}

