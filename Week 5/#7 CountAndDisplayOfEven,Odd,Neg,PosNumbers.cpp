//Write a C++ program to count and display positive, negative, odd and even numbers in an array.

#include<iostream>
using namespace std;
int main()
{
	int len, neg=0, zero=0, pos=0, even=0, odd=0;
	
	cout<<"Enter length of array : ";
	cin>>len;
	
	int array[len];
	
	//Taking array's elements from the user:
	for(int i=0; i<len; i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>array[i];
	}
	cout<<endl;
	
	//count and display for even, odd, positive and negative numbers;
	for(int i=0; i<len; i++)
	{
		if(array[i]>0) 
		{
			if(array[i]%2==0)
			{
				cout<<array[i]<<" is Positive and Even."<<endl;
				even++;
			}
			else
			{
				cout<<array[i]<<" is Positive and Odd."<<endl;
				odd++;
			}
			pos++;
		}
		else if(array[i]==0)
		{
			cout<<array[i]<<" is Zero and zero consider as even also."<<endl;
			even++;
			zero++;
		}
		else
		{
			if(array[i]%2==0)
			{
				cout<<array[i]<<" is Negative and Even."<<endl;
				even++;
			}
			else
			{
				cout<<array[i]<<" is Negative and odd."<<endl;
				odd++;
			}
			neg++;
		}
	}
	
	//Print the counts:
	cout<<endl<<endl;
	cout<<"Frequency of zeros are : "<<zero<<endl;
	cout<<"Frequency of positive Number are : "<<pos<<endl;
	cout<<"Frequency of negative Number are : "<<neg<<endl;
	cout<<"Frequency of even numbers are : "<<even<<endl;
	cout<<"Frequency of odd numbers are : "<<odd<<endl;

	return 0;
}

