//Write a C++ Program to reverse the position of the array element (Hint: First element to the last element.)

#include<iostream>
using namespace std;
int main()
{
	int len, temp,first, second;
	
	cout<<"Enter the length of array : ";
	cin>>len;
	
	int array[len];
	//taking elements from the users: 
	
	for (int i=0; i<len; i++)
	
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>array[i];
	}
	
	cout<<"Which element value you want to swap : "<<endl;
	cin>>first;
	cout<<"With whome? "<<endl;
	cin>>second;
	
	int a,b;
	bool foundf=false;
	bool founds=false;
	
	//this loop is for taking index value of element:
	for(int i=0; i<len; i++)
	{
		if(array[i]==first) 
		{
			a=i;
			foundf=true;
		}
		else if( array[i]==second)
		{
			b=i;
			founds=true;
		}
	}
	
	if((foundf==false)||(founds==false)||((foundf==false)&&(founds==false))) cout<<"Invalid Input : element not found ";
	else 
	{
		//swapping values:
		array[a]=second;
		array[b]=first;
	
		//	to print your updated array.
		cout<<"Here is your updated array's elements : \n";
		for( int k=0; k<len; k++)
		{
			cout<<array[k]<<endl;
		}
	}
	
	return 0;
}
