#include<iostream>
using namespace std;
class student
{
	public:
		int regno;
		string name;
		student()
		{
			cin>>regno;
			cin>>name;
		}
		get()
		{
			cout<<"registeration number:"<<regno<<"\n";
			cout<<"student name name:"<<name<<"\n";	
		}
		~student()
		{
			cout<<"object deleted";
		}
};
int main()
{
	student b;
	b.get();
	return 0;
}
