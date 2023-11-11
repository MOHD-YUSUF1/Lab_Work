/* Question - 4# Write a C++ program that reads a line of text and counts all occurrence of a particular word. */

// Including the Header Files and Main Funtion //

#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std ;

	int count_word (string , string) ;				// Function Prototype //

	int main()

{
	// Declaring Variables //
	
		string string1 , word;
    	int val = 0 ;
    	
	// Reading the Input from the Keyboard //

	cout<<"\n\n\t\t\t ...Counting Occurences of a Word... \n\n" ;
	
	cout<<"\n\n Enter the String: " ;
	getline(cin>>ws , string1) ;
	
	cout<<"\n\n The Entered String is -    "<<string1 ;
	
	cout<<"\n\n\n Enter the Word whose occurence count has to been found: " ;
	getline(cin>>ws , word) ;

	// Finding the Count of Entered Word  //

		val = count_word (string1 , word) ;				// Calling Function //

	// Displaying the Result //

	cout<<"\n\n The Occurence Count of the word '"<<word<<"' is -     "<<val ;
	cout<<"\n\n" ;
	
 return 0 ;
}

	int count_word (string str , string wd)					// Called Function //
{
	int i = 0 , j = 0 , temp = 0 , count = 0 , check = 0 ;		
	
		while(str[i]!='\0')
		{
			    temp = i ;
			    j=0 ;
		        
		    while(wd[j]!='\0')
			    {
			        if(str[i]==wd[j])				// Comparing Values //
			            {
							i++;
						}
			        j++;
			    }
			        
		    check = i - temp ;
		        
		    if(check==j)
		        {
					count++;					// Counting the Occurences //
				}
					
		    i = temp ;
		    i++ ;
		}
		    
	return (count) ;	
}

// End of Program //
