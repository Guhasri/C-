#include<iostream>
using namespace std;
int main()
{
    int a,b,c,bs,h;
    float area;
    cout<<"Enter the sides of the triangle: ";
    cin>>a>>b>>c;
    if(a+b>c && b+c>a && a+c>b)
    {
        cout<<"Triangle possible";
        cout<<"\nEnter the base and height: ";
        cin>>bs>>h;
        area=(bs*h)/2;
        cout<<"Area of the triange is: "<<area;
    }
    else
    {
        cout<<"Triangle not possible";
    }

}