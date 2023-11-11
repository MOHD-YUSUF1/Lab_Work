//Write a C++ program to find the sum of the all-array element

#include<iostream>
using namespace std;
int main()
{
	int n, sum=0;
	cout<<"Enter the length of array : ";
	cin>>n;
	int array[n];
	for(int i=0; i<n; i++)
	{
		cout<<"Enter value for element "<<i+1<<" : ";
		cin>>array[i];
		sum += array[i];
	}
	cout<<"Here is the sum of array's elements : "<<sum;
	return 0;
}
