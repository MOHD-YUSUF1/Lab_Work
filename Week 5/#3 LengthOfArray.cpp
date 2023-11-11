//Write a C++ program to find the length of the array.

#include<iostream>
using namespace std;
int main()
{
	int array[10];
	for (int i=1; i<=10; i++)
	{
		cout<<"Enter your element "<<i<<" : ";
		cin>>array[i];
	}
	cout<<"The length of your array is : "<<sizeof(array)/sizeof(int);
	return 0;
}

