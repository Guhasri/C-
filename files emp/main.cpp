#include <iostream>
#include<fstream>
#include<cstring>
using namespace std;

class Account
{
    int AccNo;
    string Name;
    int Bal;
public:
    Account(int x,string y,int z)
    {
        AccNo=x;
        Name=y;
        Bal=z;
    }

};

int main()
{
   Account a[3]={Account(101,"aaa",100000),Account(102,"bbb",200000),Account(103,"ccc",30000)};
   ofstream outfile("bal.dat",ios::out|ios::binary);
   for(int i=0;i<3;i++){
    outfile.write((char*)&a[i],sizeof(Account));
   }
   outfile.close();
}
