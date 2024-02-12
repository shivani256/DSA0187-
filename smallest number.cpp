#include <iostream>
using namespace std;
int findelement(int arr[],int size){
int expectedvalue=1;
for(int i=1;i<size;i++){
if(arr[i]!=expectedvalue){
return expectedvalue;
} expectedvalue++;
} return expectedvalue;
}
int main()
{
int size;
cout<<"enter array size:"<<"\n";
cin>>size;
cout<<"enter elements:"<<"\n";
int arr[size];
for(int i=1;i<size;i++){
cin>>arr[i];
}
int smallestelement=findelement(arr, size);
cout<<"smallest missing element:"<<smallestelement<<"\n";
return 0;
}

