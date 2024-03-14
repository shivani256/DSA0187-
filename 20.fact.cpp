#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"enter number:";
	cin>>n;
	int fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"factorial:"<<fact;
}
