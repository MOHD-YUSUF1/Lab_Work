/* Question - 5# Write a C++ program that displays the position or index in the string S where the string T begins, or 1 if S doesn't contain T. */

// Including the Header Files and Main Funtion //

#include<iostream>
#include <string>
#include<stdio.h>
#include<stdlib.h>

using namespace std ;

	int check_index (string , string) ;				// Function Prototype //

	int main()
	
{
	// Declaring Variables //
	
		string string1 , string2 ;
		int result = 0 ;

	// Reading the Input from the Keyboard //
	
	cout<<"\n\n Enter the First String : " ;
	getline(cin>>ws , string1) ;
	
	cout<<"\n\n Enter the Second String : " ;
	getline(cin>>ws , string2) ;
	
	// Checking the Presence of String in Another and Finding Index  //

		result = check_index(string1, string2) ;				// Calling Function //

	// Displaying the Result //

	if (result == -1)
		{
			cout<<"\n\n" ;
			cout<<"\n The Entered First String is -     "<<string1 ;
			cout<<"\n The Entered Second String is -    "<<string2 ;
			cout<<"\n\n The Second String is NOT PRESENT in the First String , therefore , the Index Value is NULL." ;
		}
	else
		{
			cout<<"\n\n" ;	
			cout<<"\n The Entered First String is -     "<<string1 ;
			cout<<"\n The Entered Second String is -    "<<string2 ;
			cout<<"\n\n The Second String is PRESENT in the First String , at the Index Value -    "<<result ;
		}
	cout<<"\n\n" ;
	
 return 0 ;
}

	int check_index (string str1, string str2)  				// Called Function //
{
		int i = 0 , j = 0 , k=0 ,  s1_len = 0 , s2_len = 0 ;
		
	for (s1_len = 0 ; str1[s1_len]!='\0' ; s1_len++) ; 
	for (s2_len = 0 ; str2[s2_len]!='\0' ; s2_len++) ;     
		 
		 
		for (i = 0 ; str1[i+s2_len-1] ; i++) 
			{
				k=i ;
				
		        for (j = 0 ; j <= s2_len-1 ; j++)
		        	{
		            	if (str1[k] != str2[j])
		                	{
								break ;
							}
						k++ ;
		 			}
		 			
		        if (j == s2_len)
		            {
						return (i) ;
						break ;
					}
		    }
	return (-1) ;
}
	
	

// End of Program //
