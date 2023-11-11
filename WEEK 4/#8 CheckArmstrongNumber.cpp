#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, lastDigit,count, Sum = 0;
	cout<<"Enter a number : ";
	cin>>n;
	int a = n;
	int b = n;
	while(n>0)
	{
		n/=10;
		count++;
	}
	while(a>0)
	{
		lastDigit = a % 10;
		Sum += pow(lastDigit,count);
		a/=10;
	}
	if(b==Sum) cout<<"Your number is Armstrong Number.";
	else cout<<"Your number is not Armstrong number.";
	return 0;
}
