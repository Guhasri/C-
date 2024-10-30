#include <iostream>

using namespace std;
class Account
{
private:
    int AccNo;
    string Name;
    float DepositAmount;
    static float Interest;
    int time;
    float finalAmount;
public:
    void setData();
    void getData();
    void calcInt();
    static void modify();
};
float Account::Interest=10;
void Account ::setData()
{
    cout<<"Enter\n";
    cout<<"Account Number: ";
    cin>>AccNo;
    cout<<"Name: ";
    cin>>Name;
    cout<<"Deposit Amount: ";
    cin>>DepositAmount;
    cout<<"Time (in months): ";
    cin>>time;
}
void Account::calcInt()
{
    float per,ToAdd;
    per=time*Interest;
    ToAdd=(per*DepositAmount)/100;
    finalAmount=DepositAmount+ToAdd;
}
void Account::getData()
{
    cout<<"\n-------------------------------------------------\n";
    cout<<"|Account No|Name|Initial Deposit|Final amount|\n";
    cout<<"\n-------------------------------------------------\n";
    cout<<"|"<<AccNo<<"\t   |"<<Name<<"\t|"<<DepositAmount<<"   \t|"<<finalAmount<<"\t|";
    cout<<"\n-------------------------------------------------\n";
}
void Account::modify()
{
    cout<<"Enter the new interest amount: ";
    int s;
    cin>>s;
    Interest=s;
}
int main()
{
   int x;
   Account cust;
   cout<<"Enter 1-Add customer\n2-Modify inerest and add customer\n";
   cin>>x;
   switch(x)
   {

   case 1:
    cust.setData();
    cust.calcInt();
    cust.getData();
    break;
   case 2:
    cust.modify();
    cust.setData();
    cust.calcInt();
    cust.getData();
    break;
   default:
    cout<<"Wrong Input!!";
   }
}
