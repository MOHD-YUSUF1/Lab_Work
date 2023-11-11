#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Program to Find root of a Quadratic equation :"<<endl;
    cout<<"ax^2 + bx + c = 0"<<endl;
    cout<<"Enter value for a : ";
    cin>>a;
    cout<<"Enter value for b : ";
    cin>>b;
    cout<<"Enter value for c : ";
    cin>>c;
    float disc, root1, root2;
    disc = sqrt((b*b)-(4*a*c));
    if(isnan(disc)) cout<<"The discriminant is not valid number, there is no real roots exits.";
    else
    {
        root1 = (-b + disc)/(2*a);
        root2 = (-b - disc)/(2*a);
        cout<<root1<<" and "<<root2<<" are the roots of your equation.";
    }
    return 0;
}
