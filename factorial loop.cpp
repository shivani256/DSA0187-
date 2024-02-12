#include<iostream>
using namespace std;
int main()
{
	int n,fact,i;
	cout<<"enter number:";
	cin>>n;
	fact=1;
	for(i=1;i<=n;++i)
	{
		fact=fact*i;
	}
cout<<"factorial:"<<fact;	
}
