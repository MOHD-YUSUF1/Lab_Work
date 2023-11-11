//Write a C++ program to find the second-largest integer in a list of integers.

#include<iostream>
using namespace std;
int main()
{
	int len, largest=0, second_largest=0;
	cout<<"Enter length of array : ";
	cin>>len;
	int array[len];
	
	if(len<2) cout<<"Invalid Input!!";
	else
	{	
		for(int i=0; i<len; i++)
		{
			cout<<"Enter element "<<i+1<<" : ";
			cin>>array[i];
			if(array[i]>largest) largest = array[i];
		}
		
		for(int i=0; i<len; i++)
		{
			if(array[i]>second_largest && array[i]<largest) second_largest = array[i];
		}

//	cout<<"Here is your largest element : "<<largest;
	cout<<"Here is your second largest element : "<<second_largest;
	}
	
	return 0;
}

