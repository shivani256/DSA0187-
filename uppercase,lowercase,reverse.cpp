#include<iostream>
#include<algorithm>
using namespace std;
string converttouppercase(string str)
  {
  	transform(str.begin(),str.end(),str.begin(),::toupper);
  	return str;
  }
  string converttolowercase(string str)
  {
  	transform(str.begin(),str.end(),str.begin(),::tolower);
  	return str;
  }
  string reversestring(string str)
  {
  	reverse(str.begin(),str.end());
  	return str;
  }
  int main(){
  	string inputString;
  	cout<<"enter string:";
  	getline(cin,inputString);
  	string uppercase=converttouppercase(inputString);
  	string lowercase=converttolowercase(inputString);
  	string reverse=reversestring(inputString);
  	cout<<"oringinal text:"<<inputString<<"\n";
  	cout<<"uppercase:"<<uppercase<<"\n";
  	cout<<"lowercase:"<<lowercase<<"\n";
  	cout<<"reverse:"<<reverse<<"\n";
  	return 0;
  }
