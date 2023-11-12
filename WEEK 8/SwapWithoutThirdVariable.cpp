//Swap Without using Third Variable.

#include<iostream>
using namespace std;
int main()
{
	int first, second;
	cout<<"Enter two numbers : ";
	cin>>first>>second;
	
	first = first + second;
	second = first - second;
	first = first - second;
	
	cout<<"First number : "<<first<<endl;
	cout<<"Second number : "<<second;
	
	return 0;
}

