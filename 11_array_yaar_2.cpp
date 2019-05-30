#include<iostream>

using namespace std;

int main(){

	{
		/* 
			WAPTO PRINT OUT SPACE RESERVED FOR VARIABLES 
			hint "sizeof(variable)" gives the space occupied by a variable
			> what does this have to do with arrays?"
			> Nothing much, but still;
		*/
		char c;  
		short s;  
		int i;  
		unsigned int ui;  
		unsigned long int ul; 
		float f;
		double d;  
		long double ld; 
		bool b = true;
		int a[10];
		char cx[10];
		bool gx[10][10];

		cout<<"The size of char is "<</* ? */<<endl;

	}

	{
		/*
 			WAPTO Swap values of 2 variables using temporary variable;
 		*/
		int a = 10, b = 20 ,temp;
	}

	{
		/*
 			WAPTO Swap values of 2 variables without using temporary variable;
 		*/
		int c = 15, d = 25;
	
	}

	{
		/*
		BUBBLE SORT (0oO0)
			->	(3) (1)  2   4 
			->	 1  (3) (2)  4
			->	 1   2  (3) (4)
			->	 1   2   3   4 

			do the bubble sort on a[], b[], c[] and also any input array d[]. find number of elements of a,b and c dynamically;
		*/
		int a[] = {5,9,1,4,7,2,3,6};
		int b[] = {2,3,9,8,9,6,7,4};
		int c[] = {9,8,7,6,5,4,3,2,1};
		int d[20];
		int n;

	}

	{
		/*
			lets capitalize! the "toupper(char) function in available in the <cctype> header"
			given the input char array string, capitalize the first letter of every word
			eg:

			in:		ajay is awesome
			out: 	Ajay Is Awesome
		*/
		char sentence[30];

	}

	{
		/*
		Palindrome - check if the string is a palindrome :

		in: anna
		out: true
		in: annie
		out: false
		in: Malayalam
		out: true

		*/

	}

	{
		/*
			Everything in the end is just 1s and 0s
		*/

		char a = 65;
		cout<<a<<endl;
		a++;
		cout<<a<<endl;
		a += 32;
		cout<<a<<endl;
	}

	{
		/*
			The shitty cipher
			-> Now you need to implement my shitty cipher
			-> all consonants are lowercased and changed to the next letter
			-> all vowels are capitalized and changed to the previous letter
			-> all other characters as it is

			eg:
			in: 	Hello World!
			out:	iDmmp xNsme!

		*/
		char input[30];


		/*
			the shitty decoder
				-> decode the messages in my shitty cipher
			in: 	iDmmp xNsme!
			out:	hello world!
		*/


	}


	{
	/*
		(1) Input 2 square 2D matrices of same size 
		(2) Find Sum of the matrices
		(3) Find Product of the matrices 

		eg:

		mA =  
		________________
		| a1 | a2 | a3 |
		________________
		| a4 | a5 | a6 |
		________________
		| a7 | a8 | a9 |

		mB = 
		________________
		| b1 | b2 | b3 |
		________________
		| b4 | b5 | b6 |
		________________
		| b7 | b8 | b9 |

		mA * mB = 

		_______________________________________________________________________________
		| (a1*b1)+(a2*b4)+(a3*b7) | (a1*b2)+(a2*b5)+(a3*b8) | (a1*b3)+(a2*b6)+(a3*b9) |
		_______________________________________________________________________________
		| (a4*b1)+(a5*b4)+(a6*b7) | (a4*b2)+(a5*b5)+(a6*b8) | (a4*b3)+(a5*b6)+(a6*b9) |
		_______________________________________________________________________________
		| (a7*b1)+(a8*b4)+(a9*b7) | (a7*b2)+(a8*b5)+(a9*b8) | (a7*b3)+(a8*b6)+(a9*b9) |
	*/
	
		int mA[10][10],mB[10][10],n;
	}



}