/* Write a program where user will enter a simple calculation and output the result

	$ ./a.out
	$ Enter a calculation: 1 + 2
	$ 1 + 2
	$ 1 + 2 = 3
	$
	$./a.out
	$ Enter a calculation: 2 * 3
	$ 2 * 3 = 6
	$
	$

*/

#include <iostream>

using namespace std;

int main()
{
	int a, b;
	char c;
	cout<<"Enter a calculation: ";
	cin>>a>>c>>b;
	cout<<a<<" "<<c<<" "<<b<<" = ";
	if(/* condition */){
		cout<<a+b;
	} else if (/* condition */){
		cout<<a-b;
	} else if (/* condition */){
		cout<<a*b;
	} else if (/* condition */){
		cout<<a/b;
	}
	cout<<endl;
	return 0;
}