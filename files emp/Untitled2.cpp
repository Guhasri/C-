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
    void displayData()const
    {
        cout<<"Account No: "<<AccNo<<endl;
        cout<<"Name: "<<Name<<endl;
        cout<<"Balance: "<<Bal<<endl;
    }
    void findHighestBalance(Account b[])
    {
        int temp;
        for(int i=0;i<3;i++)
        {
            if(b[i].Bal>temp)
                temp=b[i].Bal;
        }
        cout<<"Highest Balance:"<<temp<<endl;
    }
    void findTotalBalance(Account b[])
    {
        int temp=0;
        for(int i=0;i<3;i++)
        {
            temp+=b[i].Bal;
        }
        cout<<"Total Balance:"<<temp;

    }
};

int main()
{
    int i=0;
   Account b[3];
   ifstream infile("bal.dat",ios::in|ios::binary);
   for(;i<3;){
    infile.read((char*)&b[i],sizeof(Account));

    b[i].displayData();
    i++;
   }
   cout<<endl;
   cout<<infile.gcount()<<endl;
   cout<<endl;
   b[0].findHighestBalance(b);
   b[0].findTotalBalance(b);
   cout<<endl;
   infile.close();
}
