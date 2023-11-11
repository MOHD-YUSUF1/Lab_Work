//Program to check frequency of an integer in the list:

#include<iostream>
using namespace std;
int main()
{
	int len, frequency, num;
	
	cout<<"Enter the length of the list : ";
	cin>>len;
	
	int list[len];
	
	//taking elements of the list from user:
	cout<<"Enter the elements of the list : "<<endl;
	for(int i=0; i<len; i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>list[i];
	}
	cout<<endl;
	
	//Display the entered list:
	cout<<"Here is your entered list :"<<endl;
	cout<<"{ ";
	for(int i=0; i<len; i++)
	{
		cout<<list[i];
		if(i<len-1) cout<<" , ";
	}
	cout<<" }"<<endl<<endl;
	
	cout<<"Enter particular number from the list whose frequency you want to check : ";
	cin>>num;
	
	//checking the frequency :
	for(int i=0; i<len; i++)
	{
		if(list[i]==num) frequency++;
	}
	cout<<endl;
	
	//display the frequency output:
	cout<<"The frequency of "<<num<<" is : "<<frequency;
	
	return 0;
}

