// Write a C++ Program for Length of String Using Pointer.

#include<iostream>
using namespace std;
int main()
{
	int Length = 0;
	char string[100];
	
	cout<<"Enter your string : ";
	cin.getline(string, 100);
	
	char *ptr = string;
	
	while(*ptr != '\0')
	{
		Length++;
		*ptr++;
	}
	
	cout<<"The length of your strings is : "<<Length;
	
	return 0;
}

