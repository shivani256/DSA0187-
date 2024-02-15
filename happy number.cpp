#include<iostream>
using namespace std;
int main()
{
	int n,temp,sum=0;
	cout<<"enter number:";
	cin>>n;
	
while(n>0)
	{
		temp=temp%10;
		sum=sum+(temp*temp);
		n=n/10;
	}
	if(sum==1)
	{
		cout<<"happy number";
	}
	else
	{
		cout<<"not a happy number";
	}
    
	return 0;
}
