#include <iostream>
using namespace std;
void deleteElement(int arr[], int& size, int position) {
    if (position < 0 || position >= size) {
        cout << "Invalid array";
        return;
    }
    for (int i = position; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    --size;
    cout << "Element is deleted successfully." << endl;
}
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]); 

    cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
     int position;
    cout << "Enter the position to delete (0-" << size - 1 << "): ";
    cin >> position;
    deleteElement(arr, size, position);
    cout << "array after deletion: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

