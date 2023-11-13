// Write a C++ program that displays the position or index in the string S where
// the string T begins, or 1 if S doesn’t contain T.

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string S,T;

    cout<<"Enter your main string S : ";
    getline(cin, S);
    cout<<"Enter your substring T : ";
    getline(cin, T);

    size_t found = -1;
	found = S.find(T);
	
	if(found == -1) cout<<endl<<"1";
    else cout<<T<<" is found at index value "<<found;
    
    return 0;
}