#include<iostream>
using namespace std;
int main()
{
	int n,first=0,second=1;
	int nextTerm =0;
	cout<<"Enter number of terms for fabonacci series that you want to generate ";
	cin>>n;
	if(n<1)
	cout<<"!! Invalid input ";
	else
	{
		{
			cout<<n<<" terms of fabonacci series are : { ";
			for(int i=1; i<n; i++)
			{
				cout<<first<<" , ";
				nextTerm = first + second;
				first = second;
				second = nextTerm;
			}
			cout<<first<<" }";
		}
	}
	return 0;
}
