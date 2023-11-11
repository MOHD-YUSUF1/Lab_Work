/* Question - 2# Write a C++ program to determine if the given string is a palindrome or not. */

// Including the Header Files and Main Funtion //

#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std ;

	int check_palindrome (char[]) ;					// Function Prototype. //

	int main()
	
{
	// Declaring Variables //
	
		char string1[20] ;
		int check = 1 ; 

	// Reading the Input from the Keyboard //
	
	cout<<"\n\n Enter the String (to be checked): " ;
	gets(string1) ;

		check = check_palindrome(string1) ;

	// Displaying the Result //

	if (check==0)
		{
			cout<<"\n\n The Entered String and the Reversed String are Same, therefore, it is a Palindrome." ;
		}
	else
		{
			cout<<"\n\n The Entered String and the Reversed String are NOT Same, therefore, it is a NOT Palindrome." ;
		}
	cout<<"\n\n" ;
	
 return 0 ;
}

	int check_palindrome (char str[]) 					// Called Funtion //
{
			char rev_string1[20] ;
			int i = 0 , j = 0 , size = 0 , check = -1 ;
			
		// Reversing the String  //

		for (i = 0 ; str[i]!='\0' ; i++)	
			{
				size++ ;
			}

		for (i=(size-1) , j = 0; i>=0 , j<size ; i-- , j++)
			{
				rev_string1[j] = str[i] ;
			}
			
		check = strcmp(str , rev_string1) ;
		
	cout<<"\n\n The Entered String is -   "<<str ;
	cout<<"\n The Reversed String is -  "<<rev_string1 ;
		
	return (check) ;
}

// End of Program //
