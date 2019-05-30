#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	/*
	Write a program to 
		1. find the sum of n numbers
		2. find the sum of all even numbers
		3. find the sum of all odd numbers

	eg: 
	Enter how many numbers: 3
	Enter the numbers:
	1 2 3
	The sum of 1 + 2 + 3 is 6
	The sum of even nos is 2
	The sum of odd nos is 4

	*/
	int a[20];
	int n;

	cout<<"Enter how many numbers: ";
	cin>>n;

	/*
	WAPTO search and find the first position of a number

	Eg: 
	Enter number of elements: 7
	Enter the elements: 1 2 5 4 3 7 5
	Enter number to be searched: 5
	5 found at 2
	*/
	int b[20];
	int n2;
	cout<<"Enter number of elements: ";
	cin>>n2;


	/*
	WAPTO search and find the last position of a number

	Eg: 
	Enter number of elements: 7
	Enter the elements: 1 2 5 4 3 7 5
	Enter number to be searched: 5
	5 last found at 6
	*/
	int c[20];
	int n3;
	cout<<"Enter number of elements: ";
	cin>>n3;

	/*
	WAPTO search and find the 
			1. smallest number
			2. largest number
	Eg: 
	Enter number of elements: 7
	Enter the elements: 1 2 5 4 3 7 5
	
	Largest Number : 7
	Smallest Number 1

	*/
	int d[20];
	int n4;
	cout<<"Enter number of elements: ";
	cin>>n3;

	/*
	Merge Me
		WAPTO merge 2 arrays into new array

		Eg: 
		Enter size of first array: 5
		Enter array 1: 5 4 6 3 2
		Enter size of second array: 3
		Enter array 2: 2 3 1

		New array size : 8
		New Array: [5 4 6 3 2 2 3 1]

		New array must be stored in a variable
	*/

	int e[10], f[10], n5 ,n6;

	cout<<"Enter size of first array: ";
	cin>>n5;
	cout<<"Enter size of second array: ";
	cin>>n6;

	return 0;
}