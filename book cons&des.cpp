#include<iostream>
using namespace std;
class book
{
	public:
		
		string authname,bookname;
		book()
		{
			cin>>authname;
			cin>>bookname;
		}
		get()
		{
			cout<<" author name:"<<authname<<"\n";
			cout<<"book name:"<<bookname<<"\n";	
		}
		~book()
		{
			cout<<"object deleted";
		}
};
int main()
{
	book b;
	b.get();
	return 0;
}
