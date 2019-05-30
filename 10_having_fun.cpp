#include<iostream>
#include<cmath>

using namespace std;

int sum(int num1, int num2){
	return 0;
}

int factorial(int a){
	if(){
		return /**/;
	}
	return /**/;
}

int increment(int x){
	x++;
	cout<<"x is "<<x<<endl;
}

int increment2(int* y){
	y++;
	cout<<"y is "<<x<<endl;
}



int main()
{
string query = "Enter numbers: ";
    // WAPTO find the sum of 2 numbers using a user defined function
	int a,b;
	cout<<query;
	cin>>a>>b;
	cout<<sum(a,b);


	// WAPTO find the a raised to b; hint : <cmath> (old math.h) contains the built in function pow(a,b)

	
	cout<<query;
	cin>>a>>b;

	// WAPTO find factorial of a number using recursion (Function calling itself)

	cout<<"Enter Number: ";
	cin>> a;
	cout<<"factorial of "<<a<<" is "<<factorial(a)<<endl;;


	/*
		Pass by value and pass by reference

		&a means memory location or address of a
		*a means the variable at the memory location pointed to by a
	*/

	a = 10 , b = 10;

	increment(a)
	increment2(&b)
	cout<<"a is "<<a<<endl;
	cout<<"b is "<<b<<endl;;
	cout<<"address of a is "<<&a<<endl;
	int loc = &a;

	cout<<"Location "<<loc<<" in the memory contains "<<*loc<<endl;

	return 0;
}