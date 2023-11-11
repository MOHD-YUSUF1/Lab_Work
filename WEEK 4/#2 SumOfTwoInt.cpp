#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter two numbers ";
	cin>>a>>b;
	int z=a;
	for(int i=0; i<b; i++)
	z++;
	cout<<"The sum of "<<a<<" and "<<b<<" is "<<z;
	return 0;
}
