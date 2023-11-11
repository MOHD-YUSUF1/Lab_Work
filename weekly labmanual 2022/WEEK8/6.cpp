/* Question - 6# Write a C++ program to find sum of elements of array using recursion.*/

// Including the Header Files and Main Funtion //

#include<iostream>
#include<stdio.h>

using namespace std ;

	int recursive_sum (int [] , int) ;		            // Function Prototype. //

	int main()
	
{
	// Declaring Variables //
	
		int array[20] , size = 0 , i = 0 , sum = 0 ;

	// Reading the Input from the Keyboard //
	
	cout<<"\n Enter the Size of the Array List: " ;
	cin>>size ;

	cout<<"\n Enter the "<<size<<" Values in the First Array List as follows - \n\n" ;
		for (i=0 ; i<size ; i++)
			{
				cout<<"\t\t\t Number ["<<i<<"]: " ;
				cin>>array[i] ;
			}
			
	cout<<"\n\n The Entered Array List is -   " ;
		for (i=0 ; i<size ; i++)
			{
				if (i<=(size-2))
					{
						cout<<array[i]<<" , " ;
					}
				if (i==(size-1))
					{
						cout<<array[i]<<" . " ;
					}
			}
	
		sum = recursive_sum (array , size) ;                 // Calling Function. //
		
	cout<<"\n\n The Sum of All the Elements of the Array List (using Recursion) is -   "<<sum ;
		
 return 0 ;
}

	int recursive_sum (int a[] , int len)				    // Called Function. //
{
	if (len<=0)
		{
			return 0 ;
		}
			
	return (recursive_sum(a, len-1) + a[len-1]) ;
}

// End of Program //
