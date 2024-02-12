#include<iostream>
using namespace std;
int uppercase(string text){
	int count=0;

	for (char c : text){
		if(isupper(c))
	      count++;
	}
	return count;
	}
	int main(){
		string text;
		cout<<"enter text:";
		getline(cin,text);
		int uppercasecount=uppercase(text);
		cout<<"count is"<<uppercasecount;
return 0;	}


