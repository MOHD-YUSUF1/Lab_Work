// Develop a C++ program to find the greatest of two numbers using this pointer which returns the member variable.

#include<iostream>
using namespace std;

class Numbers
{
	private:
		int num1;
		int num2;
		
	public:
		Numbers(int a, int b) : num1(a), num2(b) {}
		
		int findgreatest()
		{
			return (this->num1 > this->num2 ) ? this->num1 : this-> num2;
		}
};

int main()
{
	int a, b;
	
	cout<<"Enter first number : ";
	cin>>a;
	cout<<"Enter second number : ";
	cin>>b;
	
	Numbers numbers(a,b);
	
	int greatest = numbers.findgreatest();
	
	cout<<"The greatest among "<<a<<" and "<<b<<" is : "<<greatest;
	
	return 0;
}

