//Program to merge two sorted arrays into another array in sorted order.

#include<iostream>
using namespace std;
int main()
{
	int len1, len2, len3, temp;
	
	cout<<"Enter the length of array1 : ";
	cin>>len1;
	
	int array1[len1];
	
	cout<<endl;
	cout<<"Enter elements of array1"<<endl;
	for(int i=0; i<len1; i++)
	{
		cout<<"Enter value for element "<<i+1<<" : ";
		cin>>array1[i];
	}
	cout<<endl;
	
	//method to sort array1:
	for(int i=0; i<len1; i++)
	{
		for(int j=0; j<len1-1; j++)
		{
			if(array1[j]>array1[j+1])
			{
				temp=array1[j];
				array1[j]=array1[j+1];
				array1[j+1]=temp;
			}
		}
	}
	
	//to display array1: 
	cout<<"Here is your 1st sorted array : "<<endl;
	cout<<"{ ";
	for(int i=0; i<len1; i++)
	{
		cout<<array1[i];
		if(i<len1-1) cout<<" , ";
	}
	cout<<" }"<<endl<<endl;;
	
	cout<<"Enter the length of array2 : ";
	cin>>len2;
	cout<<endl;
	
	int array2[len2];
	
	//taking array2's elements from user: 
	cout<<endl<<"Enter elements of array2"<<endl;
	for(int i=0; i<len2; i++)
	{
		cout<<"Enter value for element "<<i+1<<" : ";
		cin>>array2[i];
	}
	cout<<endl<<endl;
	
	//method to sort array2:
	for(int i=0; i<len2; i++)
	{
		for(int j=0; j<len2-1; j++)
		{
			if(array2[j]>array2[j+1])
			{
				temp=array2[j];
				array2[j]=array2[j+1];
				array2[j+1]=temp;
			}
		}
	}
	
	//to display array2: 
	cout<<"Here is your 2nd sorted array : "<<endl;
	cout<<"{ ";
	for(int i=0; i<len2; i++)
	{
		cout<<array2[i];
		if(i<len2-1) cout<<" , ";
	}
	cout<<" }"<<endl<<endl;
	
	len3=len1+len2;
	int MergeArray[len3];
	//Method of merge two sorted arrays into new array:
	int i=0,j=0,k=0;
	
	while(i<len1) MergeArray[k++]=array1[i++];
	while(j<len2) MergeArray[k++]=array2[j++];
	
	//Method to sort new array: 
	
	for(int i=0; i<len3; i++)
	{
		for(int j=0; j<len3-1; j++)
		{
			if(MergeArray[j]>MergeArray[j+1])
			{
				temp=MergeArray[j];
				MergeArray[j]=MergeArray[j+1];
				MergeArray[j+1]=temp;
			}
		}
	}
	
	//To display the merge array:
	cout<<"Here is your sorted merge array : "<<endl<<"{ ";
	for(int i=0; i<len3; i++)
	{
		cout<<MergeArray[i];
		if(i<len3-1) cout<<" , ";
	}
	cout<<" } ";
	
	return 0;
}

