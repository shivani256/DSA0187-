#include<iostream>
using namespace std;
class vechile
{
	public:
		int year;
		string make,model;
		void get_p()
		{
			cin>>make<<model;
			cin>>year;
		}
		void print_p()
		{
			cout<<"vechile make:"<<"\n";
			cout<<"vechile mode:"<<"\n";
			cout<<"manufacture year:"<<"\n";
		}
};
class car:public vechile
{
	public:
		
}
