// Write a C++ Program for Count vowels in String Using Pointer:

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int count = 0, start = 0;
	char string[100];
	
	cout<<"Enter your string : ";
	cin.getline(string, 100);
	
	int len = strlen(string);
	char *ptr = string;
	
	while(start != len)
	{
		if(*ptr == 'a'|| *ptr == 'e'|| *ptr == 'i'|| *ptr == 'o'|| *ptr == 'u'|| *ptr == 'A'|| *ptr == 'E'|| *ptr == 'I'|| *ptr == 'O'|| *ptr == 'U') count++;
		*ptr++;
		start++;
	}
	
	cout<<"The number of vowels in your strings are : "<<count;
	
	return 0;
}

