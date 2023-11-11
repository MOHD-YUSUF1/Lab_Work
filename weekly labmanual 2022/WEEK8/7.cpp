/* Question - 7#  Write a C++ program to find maximum and minimum elements in array using recursion. */

// Including the Header Files and Main Funtion //

#include<iostream>
#include<stdio.h>

using namespace std ;

	int recursive_min (int [] , int) ;		            // Function Prototype. //
	int recursive_max (int [] , int) ;		           // Function Prototype. //
	
	int main()
	
{
	// Declaring Variables //
	
		int array[20] , size = 0 , i = 0 , minimum = 0 , maximum = 0 ;

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
	
		minimum = recursive_min (array , size) ;		       // Calling Function. //
		maximum = recursive_max (array , size) ;              // Calling Function. //
		
	cout<<"\n\n The Minimum Value among All the Elements of the Array List (using Recursion) is -   "<<minimum ;
	cout<<"\n\n The Maximum Value among All the Elements of the Array List (using Recursion) is -   "<<maximum ;
		
 return 0 ;
}

	int recursive_min (int a[] , int len)				    // Called Function. //
{
	if (len==0)
		{
			return 0 ;
		}
	else if (len==1)
		{
			return a[0] ;
		}
	else
		{
			return min(a[len-1], recursive_min(a, len-1)) ; 
		}
}

	int recursive_max (int a[] , int len)    	         // Called Function. //
{
	if (len==0)
		{
			return 0 ;
		}
	else if (len==1)
		{
			return a[0] ;
		}
	else
		{
			return max(a[len-1], recursive_max(a, len-1)) ; 
		}
}

// End of Program //
