// Write a C++ program to find a string within a sentence and replace it with another string.

#include<iostream>
#include<string>
using namespace std;

void replace(string &sentence, string toFind, string toReplace)
{
    size_t found = sentence.find(toFind);

    while (found != string::npos) {
        sentence.replace(found, toFind.length(), toReplace);
        found = sentence.find(toFind, found + toReplace.length());
    }
}
int main()
{
    string sentence, toFind, toReplace;
    cout<<"Enter sentence : ";
    getline(cin, sentence);
    cout<<"Enter string that you want to remove from sentence : ";
    getline(cin, toFind);
    cout<<"Enter string that you want to add at that position : ";
    getline(cin, toReplace);

    replace(sentence, toFind, toReplace);

    cout<<"Your updated sentence is : "<<endl<<sentence;

    return 0;
}