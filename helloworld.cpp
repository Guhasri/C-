#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,root1,root2,d;
    cout<<"\nEnter the coffeints of x:";
    cin>>a>>b>>c;
    d=b*b - 4*a*c;
    if(d>=0)
    {
        root1= (-b+sqrt(d))/(2*a);
        root2= (-b-sqrt(d))/(2*a);
        cout<<"The roots: "<<root1<<","<<root2;
    }
    else{cout<<"Roots are imaginery";}
}
