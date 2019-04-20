#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{

bool simpleBooleanValue=true;


if(simpleBooleanValue)
{
cout<<"well you hardcoded it, didn't you?\n";
}
else
{
cout<<"you switched it yourself!";
}


int someLimit=0;
cout<<"Enter some number, less than 5\n";
cin >> someLimit;

if(someLimit<5)
{
cout<<"Great, you can follow directions!\n";
}
else
{
cout<<"BOY! WHAT DID I SAY?!\n";
}

cout<<"Press any key to continue..\n";
cin.ignore();
cin.get();

return EXIT_SUCCESS;
}
