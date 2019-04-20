#include<iostream>
#include<stdlib.h>

using namespace std;


int SquareThis(int something)
{

return something*something;

}


int main()
{


//Let's calulate the square's of numbers 1-thru-10

for(int i=1; i<=10; i++)
{

	cout<< SquareThis(i)<<endl;
}


return EXIT_SUCCESS;
}
