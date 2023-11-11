/* Question - 1# Write a C++ program that uses functions to perform the following operations:
		i. To insert a sub string into a given main string from a given position.
		ii. To delete n characters from a given position in a given string. */

// Including the Header Files and Main Funtion //

#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std ;

	void append_string (string , string , int) ;					// Function Prototype. //
	void delete_characters (string , int , int) ;			   // Function Prototype. //

	int main()
	
{
	// Declaring Variables //
	
		string string1 , update_str ;
		int choice = 0 , pos = 0 , del_count = 0;

	// Reading the Input from the Keyboard //
	
	cout<<"\n Select the Operation You Want to Perform - \n" ;
	cout<<"\n\t\t 1. Insert a String. " ;
	cout<<"\n\t\t 2. Delete 'n' Characters. " ;
	cout<<"\n\n\t Enter Your Choice: " ;
	cin>>choice ;

		switch (choice)
			{
				case 1: cout<<"\n\n\t\t\t\t ...Insert a String Wizard... \n\n" ;

						cout<<"\n Enter the String: " ;
						getline(cin>>ws , string1) ;

						cout<<"\n The Entered String Alongwith the respective indexes/positions is as follow - \n" ;
						cout<<"\n\t\t The Entered String is -        " ;
							for (int i = 0 ; string1[i] != '\0' ; i++)
								{
									if (i<10)
										{
											cout<<string1[i]<<" " ;
										}
									else if (i==10 || i>10)
										{
											cout<<string1[i]<<"  " ;
										}
								}
						cout<<"\n\t\t The Respective Indexes is -    "	;
							for (int i = 0 ; string1[i] != '\0' ; i++)
								{
									if (i<10)
										{
											cout<<i<<" " ;
										}
									else
										{
											cout<<i<<" " ;
										}
								}
						
						cout<<"\n\n\n Enter the String to be Inserted in the Main String: " ;
						getline(cin>>ws , update_str) ;

						cout<<"\n Enter the Position where you want to Insert the String: " ;
						cin>>pos ;

							append_string (string1 , update_str , pos) ;			// Calling Fucntion. //
						break ;
			
				case 2: cout<<"\n\n\t\t\t\t ...Deleting Characters Wizard... \n\n" ;

						cout<<"\n Enter the String: " ;
						getline(cin>>ws , string1) ;

						cout<<"\n The Entered String Alongwith the respective indexes/positions is as follow - \n" ;
						cout<<"\n\t\t The Entered String is -        " ;
							for (int i = 0 ; string1[i] != '\0' ; i++)
								{
									if (i<10)
										{
											cout<<string1[i]<<" " ;
										}
									else if (i==10 || i>10)
										{
											cout<<string1[i]<<"  " ;
										}
								}
						cout<<"\n\t\t The Respective Indexes is -    "	;
							for (int i = 0 ; string1[i] != '\0' ; i++)
								{
									if (i<10)
										{
											cout<<i<<" " ;
										}
									else
										{
											cout<<i<<" " ;
										}
								}
						
						cout<<"\n\n\n Enter the Postion From where You want to Delete the Characters in the Given String: " ;
						cin>>pos ;

						cout<<"\n Enter the Number of Characters You want to Delete from the String: " ;
						cin>>del_count ;
						
							delete_characters (string1 , pos , del_count) ; 	//Calling Function. //
						break ;
						
				default: cout<<"\n\n\t\t  Sorry!!! Wrong Choice Entered... " ; 
						 cout<<"\n\t\t Please Try Again!!! " ;
			}
	cout<<"\n\n" ;
		
 return 0 ;
}

	void append_string (string str, string val , int index)				// Called Function. //
{
		int size1 = 0 , size2 = 0 , size3 = 0 , str1_pos = 0 , str_pos = 0 , val_pos = 0 , check= 0 ;
	
	for (size1=0 ; str[size1]!='\0' ; size1++) ;		// Calculating String Length //
	for (size2=0 ; val[size2]!='\0' ; size2++) ;		// Calculating String Length //
	
	size3 = size1+size2 ;
	
		char str1[size3] ;							   // Declaring string Array For Appending //
		
	while (str1_pos<index)							  // Copying the First part of the Original String Just Before the Given Index Value //
		{
			str1[str1_pos] = str[str_pos] ;
			str1_pos++ ;
			str_pos++ ;
		}
		
		check = str1_pos+size2 ;
		
	while(str1_pos==index || str1_pos<check)		 // Copying the Appending String at the Given Index Value //
		{
			str1[str1_pos] = val[val_pos] ;
			str1_pos++ ;
			val_pos++ ;
		}
		
	while(str[str_pos]!='\0')						// Copying the Left part of the Original String Just After the Given Index Value //
		{
			str1[str1_pos] = str[str_pos] ;
			str1_pos++ ;
			str_pos++ ;
		}
		
	// Displaying the Result //
	
	cout<<"\n\n\n\t The Original Entered String is -     "<<str ;
	cout<<"\n\t The String to be Appeneded is -      "<<val ;
	cout<<"\n\n\t The Final String after Appending is -      "<<str1 ;
}


	void delete_characters (string str , int index , int len)				// Called Function. //
{
		int size = 0 , str1_pos = 0 , str_pos = 0 ;
		
	for(size=0 ; str[size]!='\0';size++) ;						// Calculating String Length //
		
	size = size - len ;
		
		char str1[size] ;									   // Declaring String Array //
		
	while(str1_pos<index)									  // Copying the First part of the Original String Just Before the Given Index Value //
		{
			str1[str1_pos] = str [str_pos]	;
			str1_pos++ ;
			str_pos++ ;	
		}
		
	str_pos += len ;										// Updating Location to New Value //

	while(str1_pos==index || str[str_pos]!='\0')			// Copying the Left part of the Original String Just After the Given Index Value //
		{
			str1[str1_pos] = str[str_pos] ;
			str1_pos++ ;
			str_pos++;
		}
		
	// Displaying the Result //
		
	cout<<"\n\n\n\t The Original Entered String is -     "<<str ;
//	cout<<"\n\t The String to be Appeneded is -      "<<val ;
	cout<<"\n\n\t The Final String after Deletion is -      "<<str1 ;
}

// End of Program //
