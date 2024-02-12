#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"enter age of the person:";
	cin>>age;
	if(age<18){
		cout<<"Person is eligible to vote";
	}
	else{
		cout<<"person is not eligible to vote";
	}

}
