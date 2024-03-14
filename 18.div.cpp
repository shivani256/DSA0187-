#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter number 1:";
	cin>>a;
	cout<<"enter number 2:";
	cin>>b;
	if(b==0)
	{
		cout<<"error";
	}
	int c=a/b;
	cout<<"division of two numbers:"<<c;
}
