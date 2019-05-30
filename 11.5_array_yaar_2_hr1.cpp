/*
Counting Valleys {Hackerrank Level Challenge}

	Gary is an avid hiker. He tracks his hikes meticulously, paying close attention to small details like topography. 
	During his last hike he took exactly n steps. For every step he took, he noted if it was an uphill, U, or a downhill, D, step. 
	Gary's hikes start and end at sea level and each step up or down represents a 1 unit change in altitude. We define the following terms:

 		* A mountain is a sequence of consecutive steps above sea level, starting with a step up from sea level and ending with a step down to sea level. 
 		* A valley is a sequence of consecutive steps below sea level, starting with a step down from sea level and ending with a step up to sea level.

 	Given Gary's sequence of up and down steps during his last hike, find and print the number of valleys he walked through. 

 	For example, if Gary's path is s = [D, D, U, U, U, U, D, D], he first enters a valley 2 units deep. 
 	Then he climbs out an up onto a mountain 2 units high. Finally, he returns to sea level and ends his hike. 

 	Complete the countingValleys function below.  It must return an integer that denotes the number of valleys Gary traversed. 

 	countingValleys has the following parameter(s): 

		* n: the number of steps Gary takes
    	* s: a string describing his path

	Sample Input
	
	8
	UDDDUDUU

	Sample Output
	
	1

	Explanation
	If we represent _ as sea level, a step up as /, and a step down as \, Gary's hike can be drawn as:

	_/\      _
   	   \    /
        \/\/

	He enters and leaves one valley.

*/

#include<iostream>
#include<cstring>

using namespace std;


int countingValleys(int n, char s[100]){

	int level = 0,			//the level before considering the current item 
	int postlevel = 0, 		// the level after considering the current item
	int valleyCount = 0;	// the count of valleys

	for(int i = 0; i < n ; i++){

		level = postlevel; // set the loop's current round level to previous round's postLevel

		if(s[i] == 'U'){
			postlevel++;	// update the value of postLevel
		}else{
			postlevel--;	// update the value of postLevel
		}

		if(level == 0 && postlevel == -1){ 
			/* if we were at sea level before this round, but went down 1 after this round, it means 
				we have entered a valley */
			valleyCount++;
		}

	}
	return valleyCount;
}

int main(int argc, char const *argv[])
{
	int n;
	char s[100];
	cin>>s;
	n = strlen(s); // get the length of the string

	bool isValidMountainValleyString = true; 		//check if the string is a valid mountain valley string
	int u_count = 0;								// up count
	int d_count = 0;								// down count
	for(int i = 0; i < n ; i++){
		if(s[i] != 'U' && s[i] != 'D'){				
			isValidMountainValleyString = false;	// if the char is neither up nor down, it is not a valid string
			break;
		}
		if(s[i] == 'U'){
			u_count++;
		}else{
			d_count++;
		}
	}
	if(u_count != d_count){							// if we dont reach sea level again, it is not a valid string
		isValidMountainValleyString = false;
	}

	if(isValidMountainValleyString)
		cout<<"The number of valleys is "<<countingValleys(n,s)<<endl;
	else
		cout<<"Illegal String!"<<endl;

	return 0;
}