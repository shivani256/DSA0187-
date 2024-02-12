#include<iostream>
using namespace std;
int fibbonaci(int n){
	if(n<=1)
	return n;
	return fibbonaci(n-1)+fibbonaci(n-2);
}
int main(){
	int n;
	cout<<"enter the N value to find the nth fibbonnaci number: ";
	cin>>n;
	cout<<"the Nth fibbonnaci number is:"<<fibbonaci(n);
	
}
