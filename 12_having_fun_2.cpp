#include<iostream>

/*
	Modularity
	

*/
using namespace std;

void display(int marks[5]); // if you define(implement) a function below the main(), you have to declare it beforehand
void display2(int marks[5]); // this is because the c++ compiler is so stupid that it cant look down, unlike the javac


int main()
{
	
	{
		/*
		Passing Arrays

			In this exercise you only need to write the function code, but see how we pass arrays to
			a function
		*/
		int marks[5] = {88, 76, 90, 61, 69}; // yes, you can initialize arrays like this
		display(marks);

		int num[3][2] = {
	        {3, 4},
	        {9, 5},
	        {7, 1}

	    };
	    display2(num);
	}

	{

	/*
		Write a function that outputs "Hello World"
	*/

	}

	{

	/*
		Write a function that takes in a string and outputs Hello [String]!
	*/

	}

	{

	/*
		Write a function that takes 2 integers a and b and returns a/b as a float value. return 0 if 
		b = 0;
	*/

	}

	{
		/*
			Function overloading
			2 functions can have the same name as long as the signature(params) are different
			eg:
			
			int area(int a, int b){
				return a*b;
			}

			int area(int r){
				return 3.14*r*r;
			}

			int area(float a){
				return a*a;
			}

			using this knowledge, write a function check() such that if you pass an int
			it outputs "Hey, it's an integer", and if you pass a bool it says
			"Hey, its a boolean"
		*/
	}

	{

	/*
		Write a function that returns the capitalized version the given char if it is a small letter
		return the same char if it is not a small letter
		hint: ('a' < 'b'< 'c'), and in the end everything is 1s and 0s
	*/

	}

	{

	/*
		Write a function that takes an int value, and print that number of '* '
		then, write another function that takes an int value and make a triangle like this:

		*
		* *
		* * *

		of height n, using the first function inside the second function
		you can use loops, etc inside this 2nd function
	*/

	}

	{

	/*
		Write  these functions that takes in 3 boolean values a,b,c and returns the result 
		of the following boolean operations:

		1) (a and b) or c
		2) not(a and b and c)
		3) (a or not(b)) and not(c) 

		hint: refresh your operator knowlege from sumita arora
	*/

	}
	
	{
		/*
			Factorial Refresher

			Write a function fact(x) that takes an integer x and returns the factiorial 
			of x. Use recursion to find the factorial.
		*/
		int n;
		cin>>n;
		cout<<"factorial of "<<n<<" is "<<fact(n)<<endl;
	}

    {
    	/*
		Fibonacci series
		the fibonacci series is defined as f(i+2) = f(i)+f(i+1), f(0) = f(1) = 1
		->	1,1,2,3,5,8,13,........
		
		Excercises

			(1) print the value of nth fibonacci number (use any method)
			(2) print fibonacci series upto n (Without using recursion)
			(3) print fibonacci series upto n (using recursion)

    */
    }
	return 0;
}

void display(int m[5])
{

}

void display2(int n[3][2]){

}
