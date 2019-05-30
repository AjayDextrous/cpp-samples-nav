// This is a program that inputs your name and outputs a greeting

#include<iostream>

int main(){
	char name[20];
	cout<<"Enter your full name: ";
	// cin>>name;
	getline(cin,name);
	cout<<endl<<"Hello "<<name<<"!"<<endl;
	return 0;
}