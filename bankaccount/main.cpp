#include <iostream>
using namespace std;
float dep;
float wd;
float amt;
int y,z,temp;
class BankAccount
{
    private:
    int AccNo;
    string Name;
    float BalAmt;
    static int minBal;
    static int NoOfWithdrawals;
    string IFSC;
    string Area;
    public:
        BankAccount(int x, string y, float z, string l, string m)
        {
            AccNo=x;
            Name=y;
            BalAmt=z;
            IFSC=l;
            Area=m;
        }
    void deposit(float dep)
    {
        BalAmt+=dep;
        cout<<"Deposit: "<<BalAmt<<"\n";
    }
    void withdraw(float wd)
    {
        if(BalAmt<minBal)
            cout<<"Balance below minimum balance";
        else
        {
        BalAmt-=wd;
        cout<<"Withdrawal: "<<BalAmt<<"\n";
        NoOfWithdrawals++;
        }
    }
    void findCustomer(int an, int i)
    {
            if(an==AccNo)
            {
                y=i;
            }
    }
    void interest();
    inline void transfer(BankAccount &Customer,float amt)
    {
        withdraw(amt);
        Customer.deposit(amt);
    }
};
int BankAccount::minBal=1000;
int BankAccount::NoOfWithdrawals=0;
void BankAccount:: interest()
{
    if(BalAmt>=10000)
    {
        BalAmt+=(5.0/100)*BalAmt;
    }
}
int main()
{
    BankAccount Customer[6]={BankAccount(123,"Deva",10000.00,"IB123456","Peelamedu"),BankAccount(456,"Dharsh",20000.00,"ISB123456","Peelamedu"),
                            BankAccount(789,"Kavya",5000.30,"IB123456","Nelambur"),BankAccount(101,"San",3000.00,"PN123456","Peelamedu"),
                            BankAccount(112,"Ezhil",15000.00,"IB123456","Nelambur"),BankAccount(131,"DD",100000.00,"PJ123456","Peelamedu")
                            };
    int i;
    for(i=0;i<6;i++)
        Customer[i].interest();
    int x,AN,AN2;
    cout<<"Enter Account No: ";
    cin>>AN;
     for(int i=0;i<6;i++)
        {
        Customer[i].findCustomer(AN,i);
        }
    cout<<"Enter\n1-Deposit\n2-Withdraw\n3-Amount Transfer\n";
    cin>>x;
    switch(x)
    {
    case 1:
        cout<<"Enter Deposit Amount: ";
        cin>>dep;
        Customer[y].deposit(dep);
        break;
    case 2:
        cout<<"Enter Withdrawal Amount: ";
        cin>>wd;
        Customer[y].withdraw(wd);
    break;
    case 3:
        cout<<"Enter account to transfer: ";
        cin>>AN2;
        temp=y;
        for(int i=0;i<6;i++)
        {
        Customer[i].findCustomer(AN2,i);
        }
        z=y;
        cout<<"Enter amount to transfer: ";
        cin>>amt;
        Customer[temp].transfer(Customer[z],amt);
        break;
    }
}
