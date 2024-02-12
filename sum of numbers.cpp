#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter no of numbers to be added:";
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=i;
	}
	cout<<"sum of n numbers is"<<sum;
	return 0;
}
