#include<iostream>
using namespace std;
class bank
{
	public:
		int accno;
		string name;
		bank()
		{
			cin>>accno;
			cin>>name;
		}
		get()
		{
			cout<<"account number:"<<accno<<"\n";
			cout<<"account owner name:"<<name<<"\n";	
		}
		~bank()
		{
			cout<<"object deleted";
		}
};
int main()
{
	bank b;
	b.get();
	return 0;
}
