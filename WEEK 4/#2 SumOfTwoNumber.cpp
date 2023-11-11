#include<iostream>
using namespace std;
int add(int a, int b)
{
	for (int i=1; i<=b; i++)
	{
		a++;
	}
	return a;
}
int main()
{
//	int a = add(10, 32);
//	cout<<a;
//	return 0;
	int a,b;
	cout<<"Enter a two numbers ";
	cin>>a>>b;
	int z = add(a, b);
	cout<<"Sum of "<<a<<" and "<<b<<" is "<<z;
}
