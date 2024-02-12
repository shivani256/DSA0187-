#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {2, 4, 6, 8};
    int size = sizeof(arr) / sizeof(arr[0]); 

    int sum = 0;

    for(int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }

 
    double average = static_cast<double>(sum) / size;

    cout << "The average of the elements in the array: " << average;

    return 0;
}

