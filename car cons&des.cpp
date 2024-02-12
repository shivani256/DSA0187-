#include<iostream>
using namespace std;
class car
{
	public:
		int no;
		string name;
		car()
		{
			cin>>no;
			cin>>name;
		}
		get()
		{
			cout<<"license number:"<<no<<"\n";
			cout<<"car owner name:"<<name<<"\n";	
		}
		~car()
		{
			cout<<"object deleted";
		}
};
int main()
{
	car b;
	b.get();
	return 0;
}
