#include<iostream>
using namespace std;
int main()
{
	float a[6],result;
	char ch='a';
	cout<<"Enter values of a,b,c,d,e,f and g to perform following expresion"<<endl;
	cout<<"((a + b / c * d - e) * (f - g))"<<endl;
	for(int i=0; i<=6; i++)
	{
		cout<<"Enter value for "<<ch<<" : ";
		cin>>a[i];
		ch++;
	}
	result = ((a[0] + a[1] / a[2] * a[3] - a[4]) * (a[5] - a[6]));
	cout<<"The result of expresion (( "<<a[0]<<" + "<<a[1]<<" / "<<a[2]<<" * "<<a[3]<<" - "<<a[4]<<") * ("<<a[5]<<" - "<<a[6]<<" )) is "<<result;
	return 0;
}
