#include <iostream>
#include<bits/stdc++.h>
#include<cctype>
using namespace std;

int main()
{
    string a;
    cout << "Enter the string: " << endl;
    cin>>a;
    cout<<"String length-1\nReverse string-2\nToupper-3\n";
    int x;
    cin>>x;
    switch(x)
    {
    case 1:
        cout<<"Using pre-defined: "<<a.length();
        break;
    case 2:
        cout<<"Using pre-defined: ";
        reverse(a.begin(),a.end());
        cout<<a;
        break;
    case 3:
        cout<<"Using pre-defined: ";
        transform(a.begin(), a.end(),a.begin(),::toupper);
        cin>>a;
        break;
    }
    return 0;
}

