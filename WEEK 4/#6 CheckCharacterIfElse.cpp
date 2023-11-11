#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any character :";
    cin>>ch;
    int a = (int)ch;
    if (a>=97 && a<=122)
    cout<<"Your character is Lower case alphabet ";
    else if (a>=65 && a<=90)
    cout<<"Your character is Upper case alphabet ";
    else if (a>=48 && a<=57)
    cout<<"Your character is Numeric ";
    else
    cout<<"Your character is Special character ";
    return 0;
}
