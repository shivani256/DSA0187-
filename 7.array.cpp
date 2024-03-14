#include <iostream>

using namespace std;

int main() {
    int numbers[30],a;
    cout<<"enter size of array:";
    cin>>a;
    cout<<"enter numbers:";
    for(int i=1;i<=a;i++)
    {
      cin>>numbers[i];
	}

    int arraySize = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Elements of the array:" << endl;
    for (int i = 1; i <= a; ++i) {
        cout << "Element " << i << ": " << numbers[i] << endl;
    }

    return 0;
}

