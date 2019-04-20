/*

Arrays are basic forms of "lists".

Hard-set length. An array of 20 is always of length 20.

Accessing Values:
	Accessing arrays is done through indexing
	Indexing is performed like so:
		myArray[0]     //index 0, the first thing in the array
		yourArray[1]   //index 1, the 2nd thing in the array
	Indexing is 0-based. Always.

	If an myArray is 5-items long, accessing myArray[5] will cause an error. BAD!
	
*/
#include<stdlib.h>
#include<iostream>

using namespace std;

   int main()
   { 
	int arrayOfNumbers[3];

	arrayOfNumbers[0]=5; //Start Of array

	arrayOfNumbers[1]=10; 

	arrayOfNumbers[2]=15;

	
	//print the array
	for(int i=0; i<3; i++)
	{
	   cout<<"array index "<<i<<"  = "<<arrayOfNumbers[i]<<endl;
	}

	return EXIT_SUCCESS;
   }
