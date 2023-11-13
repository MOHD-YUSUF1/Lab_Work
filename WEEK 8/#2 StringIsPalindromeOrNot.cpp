// Write a C++ program to determine if the given string is a palindrome or not.

#include<iostream>
#include<string>
using namespace std;

bool IsPalindrome(string str)
{
  int len = str.length();
  for(int i = 0; i< len/2; i++)
  {
    if(str[0] != str[len-1-i]) return false;
  }
  return true;
}

int main()
{
  string str;
  cout<<"Enter your string : ";
  getline(cin,str);

  if(IsPalindrome(str)) cout<<str<<" is Palindrome string";
  else cout<<str<<" is not Palindrome string";
  
  return 0;
}
