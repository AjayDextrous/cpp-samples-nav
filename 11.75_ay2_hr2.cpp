/*

Mars Exploration

Sami's spaceship crashed on Mars! She sends a series of SOS messages to Earth for help. 

Letters in some of the SOS messages are altered by cosmic radiation during transmission. Given the signal received by Earth as a string, 
s, determine how many letters of Sami's SOS have been changed by radiation.

For example, Earth receives SOSTOT. Sami's original message was SOSSOS. Two of the message characters were changed in transit. 

Complete the marsExploration function in the editor below. It should return an integer representing the number of letters changed during transmission. 

Constraints:

	length of s will be a multiole of three

Sample input:

SOSSPSSQSSOR

Sample Output:

3

Explanation:

	Expected signal: SOSSOSSOSSOS
	Recieved signal: SOSSPSSQSSOR
	Difference:          X  X   X

*/