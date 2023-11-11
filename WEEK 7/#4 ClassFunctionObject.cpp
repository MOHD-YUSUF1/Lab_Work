// Write a C++ program to create three objects for a class named pntr_obj with data members such as roll_no & name.
// Create a member function set_data() for setting the data values and print() member function to print which object
// has invoked it using the ‘this’ pointer.

#include<iostream>
#include<string>
using namespace std;

class pntr_obj
{
	int roll_no;
	string name;
	
	public:
		pntr_obj &set_data()
		{
			cout<<endl<<"Enter roll number : ";
			cin>>roll_no;
			cin.ignore();
			cout<<"Enter name : ";
			getline(cin, name);
			return *this;
		}
		
	pntr_obj print()
	{
		cout<<endl<<"Roll number is : "<<roll_no<<endl;
		cout<<"Name is : "<<name<<endl;
		return *this;
	}
};

int main()
{
	pntr_obj obj1, obj2, obj3;
	obj1.set_data();
	obj2.set_data();
	obj3.set_data();
	
	obj1.print();
	obj2.print();
	obj3.print();
	
	return 0;
}

