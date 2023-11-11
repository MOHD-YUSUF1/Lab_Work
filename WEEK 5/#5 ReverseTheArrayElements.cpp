//Program to Reverse the array's elements:

#include<iostream>
using namespace std;
int main()
{
	int len;
	
	cout<<"Enter the length of array : ";
	cin>>len;
	
	int array[len];
	
	//loop for taking elements from user:
	
	for(int i=0; i<len; i++)
	{
		cout<<"Enter array's element "<<i+1<<" : ";
		cin>>array[i];
	}
	int array1[len];
	
	//Steps to reverse the array:
	
	for(int k=0; k<len; k++)
	{
		array1[k]=array[len-k-1];
	}
	
	//loop for print elements:
	
	cout<<"Here is your reverse array : "<<endl;
	
	for(int j=0; j<len; j++)
	{
		cout<<j+1<<" element is : "<<array1[j]<<endl;
	}
	
	return 0;
}

