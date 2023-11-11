//Write a C++ program to enter elements in the array and display the array elements.

#include<iostream>
using namespace std;
int main()
{
	int len_array;
	
	cout<<"Enter the length of array : ";
	cin>>len_array;
	
	int array[len_array];
	
	for(int i=0; i<len_array; i++)
	{
		cout<<"Enter value for element "<<i+1<<" : ";
		cin>>array[i];
	}

//	to print the array elements

	cout<<"Here is your array's elements : "<<endl;

	for(int j=0; j<len_array; j++)
	{
		cout<<array[j]<<endl;
	}

	return 0;
}

