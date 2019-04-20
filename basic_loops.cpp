/*
What are loops?

	Sometimes you wanna run the same code over and over again.
	Sometimes with 1 little change (do the same *action* on a different *thing* every time)
	Sometimes just.. the same thing. Like .. the root level of a menu?

	Three fundamental types of loops exist:
	*For Loop
	*While Loop
	*Do-While Loop

	These three are core to basic programming. For/While are most used.

	For Loop
		Basic structure    for(int i=0; i<5; i++) 
				    {
				      //do something


				    }
		Breaking this down..
			int i=0;  
			This is the initializer. It gives the loop a place to start. 
				Defining a new "int" named "i" starting at 0. 
				This is necessary to "prime" the loop.
			i<5;
			This is the sentinel value. It gives the loop a place to end.
				This expression evaluates to true/false.
				While this is true, the loop will run.
				This *must* end at some point. Otherwise we will have an infinite loop.
											   ^ VERY BAD
			i++
			This is the incrementer. It moves the loop along.
				i++ is code short-hand for "i = i+1"

			//do something
			This is just whatever you want to execute repeatedly in the scope of the loop


		Conversationally, "For 'i' equals 0, while i is less than 5, i++" 


	While Loop
		Basic Structure        int i=0;
				       while(i<5)
					{
					   //do something


					   i++;
					}
		Breaking this down..
			int i=0;
			This is the initializer again. Gives loop a place to start
				Note that it's outside the loop.
			i<5
			Sentinel value again. Gives loop a place to end
				Must evaluate to true for the loop to run
			//do something
			This is just whatever you want to execute repeatedly
			
			i++;
			This is the incrementer. Notice that it's INSIDE the while loop. 
				We have to move 'i' along, or we'll get an infinite loop..BAD

		Conversationally.. "while i is less than 5,  do something, i++"


	Do-While Loop
		Basic Structure		int i=0;
					do
					  {
						//do something;

						i++;
					  }while(i<5);
		Breaking this  down..
			int i=0;
			Initializer again.. need somewhere to start
			
			//do something
			Your code

			i++;
			Incrementer again.. need to chug the loop along

			while(i<5)
			Here's a weird one, our conditional is at the bottom.
				This is because the DO loop *always* runs atleast ONCE.
				It will CONTINUE to run, WHILE this condition is true.
				You can guarantee it to run atleast once.


Uncomment the different sections below for examples
*/




#include<iostream>
#include<stdlib.h>

using namespace std;

void ForLoopExample()
{
	cout<<"For Loop Example: "<<endl;

	for(int i=0; i<5; i++)
	{
	   cout<<"Current value of i: "<<i<<endl;
	}
}


void WhileLoopExample()
{
	cout<<"While Loop Example: "<<endl;

	int i=0;

	while( i<5 )
	{
	  cout<<"Current value of i: "<<i<<endl;

	  i++;
	}
}


void DoWhileLoopExample()
{
	cout<<"Do-While Loop Example: "<<endl;

	int i=0;
	
	do
	{
	  cout<<"Current value of i: "<<i<<endl;
	

	  i++;

	}while(i<5);

}

int main()
{

// Uncomment each one below for an example

//ForLoopExample();

//WhileLoopExample();

//DoWhileLoopExample();






return EXIT_SUCCESS;
}
