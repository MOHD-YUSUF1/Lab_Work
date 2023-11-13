// Write a C++ program that reads a line of text and counts all occurrence of a particular word.

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string line, word;
    int count;

    cout<<"Enter your line : ";
    getline(cin, line);
    cout<<"Enter your word that you want to count : ";
    cin>>word;

    size_t found = line.find(word);

    while(found != string::npos)
    {
        count++;
        found = line.find(word, found+1);
    }

    cout<<endl<<word<<" is repeated "<<count<<" times in your line.";
    
    return 0;
}