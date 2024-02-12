#include<iostream>
using namespace std;
class rectangle
{
	public:
		int l,b;
		rectangle()
		{
			cin>>l>>b;
			
		}
		get()
		{
			cout<<"length:"<<l<<"\n";
			cout<<"breadth:"<<b<<"\n";	
		}
		~rectangle()
		{
			cout<<"object deleted";
		}
};
int main()
{
	rectangle b;
	b.get();
	return 0;
}
