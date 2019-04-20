#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
//Basic Console output
cout<<"Hello World!\n What is your name?\n";

//Basic Console input
string name;
cin >> name;

//Basic Console output

cout<<"Hello "<<name<<"!\n";

//Return exit code (0) Success, indicating things went smoothly
return EXIT_SUCCESS;
}
