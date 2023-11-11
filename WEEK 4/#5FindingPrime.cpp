#include<iostream>
using namespace std;
int main()
{
     int n;
     cout<<"This Program is for Finding Prime between 1 to n :"<<endl;
     cout<<"Enter value for n :";
     cin>>n;
     if (n<1) cout<<"!! Invalid Input";
    // else if(n==1) cout<<1<<" is neither Prime nor Composite.";
     else if(n==2) cout<<"There is no prime number between 1 and 2 "<<endl<<2<<" is smallest Prime number that is only even Prime.";
     else
     {
        for(int j=2; j<n; j++)
        {
            bool a=true;
            for(int i=2; i<j; i++)
            {
                if(j%i==0) a=false;
            }
            // if (a==true) cout<<"Your number is Prime";
            // if(a!=true) cout<<"Your number is composite";
            if (a==true) cout<<j<<endl;
        }
     }

    return 0;
}
