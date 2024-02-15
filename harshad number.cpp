#include<iostream>
using namespace std;
int main()
{
	int n,temp,sum=0;
	cout<<"enter number:";
	cin>>n;
	temp=n;
	while(temp!=0)
	{
		sum=sum+temp%10;
		temp=temp/10;
		
	}
	
	if(n%sum==0)
	{
		cout<<"harshad number";
	}
	else
	{
		cout<<"not a harshad number";
	}
	return 0;
}
