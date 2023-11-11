// Write a C++ program using pointers to compute the sum, mean and standard deviation of all elements stored in an array of n real numbers:

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int len, sum = 0;
	
	cout<<"Enter the length of your array : "; //Input length of the data
	cin>>len;
	
	int array[len]; // Declaring array of length given by user
	int *ptr = array;
	
	for(int i=1; i<=len; i++) // Taking array elements
	{
		cout<<"Enter element "<<i<<" : ";
		cin>>*ptr;
		sum += *ptr; // Sum of the data
		*ptr++;
	}
	
	float mean = sum/len; // Mean of the data
	float SumOfSqDiff = 0; // SumOfSqDiff = sum(element(i) - mean)^2
	float stdDev;
	
	ptr = array;
	
	for(int i=1; i<=len; i++)
	{
		SumOfSqDiff += pow((*ptr - mean),2);
		*ptr++;
	}
	
	stdDev = sqrt(SumOfSqDiff/len);
	
	// Output
	cout<<endl<<"Sum of your data is : "<<sum<<endl;
	cout<<"Mean of your data is : "<<mean<<endl;
	cout<<"Standard Deviation of your data is : "<<stdDev;
	
	return 0;
}

