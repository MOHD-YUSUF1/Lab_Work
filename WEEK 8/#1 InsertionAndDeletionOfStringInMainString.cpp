// Write a C++ program that uses functions to perform the following operations:
// i. To insert a sub string into a given main string from a given position.
// ii. To delete n characters from a given position in a given string.

#include<iostream>
#include<string>
using namespace std;

string deletion(string &str_main)
{
    int strt_loc, numberOfChar;

    cout<<"Please enter strating index loction of character that you want to delete from main string : ";
    cin>>strt_loc;
    cout<<"Enter how many number of characters you want to delete : ";
    cin>>numberOfChar;

    str_main.erase(strt_loc, numberOfChar);

    return str_main;
}

string insertion(string &str_main)
{
    int location;
    string substr;

    cout<<"Please enter index location where you want to insert your sub string : ";
    cin>>location;
    cin.ignore();
    cout<<"Please enter your substring : ";
    getline(cin,substr);

    str_main.insert(location, substr);
    return str_main;
}

int main()
{
    string str_main;

    cout<<"Enter main string : ";
    getline(cin,str_main);

    int a;
    cout<<"What do you want? insertion or deletion of string!! "<<endl;
    cout<<"Please enter 1 for insertion and 0 for deletion : ";
    cin>>a;
    
    if(a==0) deletion(str_main);
    else if(a==1) insertion(str_main);
    else cout<<"Invalid input !! ";

    cout<<"Your updated string is : "<<str_main;

    return 0;
}