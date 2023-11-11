/* Question - 3# Write a C++ program to print the transpose of a given matrix using function. */

// Including the Header Files and Main Funtion //

#include<iostream>
#include<stdio.h>

using namespace std ;

	int transpose (int a[][5] , int , int) ;		// Function Prototype. //

	int main()
	
{
	// Declaring Variables //
	
		int array[5][5] , row = 0 , column = 0 , i = 0 , j = 0 ;

	// Reading the Input from the Keyboard //
	
	cout<<"\n Enter the Size of the Matrix - " ;
	cout<<"\n\n\t\t\t\t Number of Rows: " ;
	cin>>row ;
	cout<<"\t\t\t\t Number of Columns: " ;
	cin>>column ;
				
	cout<<"\n\n Enter the "<<(row*column)<<" Values in the First Matrix as follows - \n\n" ;
		for (i=0 ; i<row ; i++)
			{
				for (j=0 ; j<column ; j++)
					{
						cout<<"\t\t\t\t Index ["<<i<<"]["<<j<<"]: " ;
						cin>>array[i][j] ;
					}
			}
			
	cout<<"\n\n\n    The Entered Matrix is -  " ;
		for (i=0 ; i<row ; i++)
			{
				for (j=0 ; j<column ; j++)
					{
						cout<<"\t"<<array[i][j]<<"    " ;
					}
				cout<<endl<<"\t\t\t" ;
			}
	
	transpose (array , row , column) ;                        // Calling Function. //

 return 0 ;
}

	int transpose (int a[][5] , int m , int n)				// Called Function. //
{
	cout<<"\n\n\n    The Transpose of the Entered Matrix is -  " ;
	
	for (int i=0 ; i<m ; i++)
		{
			for (int j=0 ; j<n ; j++)
				{
					cout<<"\t"<<a[j][i]<<"    " ;
				}
			cout<<endl<<"\t\t\t\t\t" ;
		}
}

// End of Program //
