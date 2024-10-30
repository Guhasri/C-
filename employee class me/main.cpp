#include <iostream>
using namespace std;
class Employee
{
private:
    int Id,BasicPay;
    string Name;
    float Allowance,Deduction,GP,NP;
public:
    void getData();
    void setData();
    void computeAllowance();
    void computeDeduction();
    void computeGP();
    void computeNP();
    float totalNP();
};
void Employee::setData()
{
    cout<<"\n\nEnter\nId: ";
    cin>>Id;
    cout<<"Name: ";
    cin>>Name;
    cout<<"BasicPay: ";
    cin>>BasicPay;
    cout<<"\n------------------------------------------------------------------------------------------------------------\n";
}
void Employee:: computeAllowance()
{
    Allowance=(float)(85*BasicPay)/100;
}
void Employee:: computeGP()
{
    GP=BasicPay+Allowance;
}
void Employee:: computeDeduction()
{
    Deduction=(float)(15*BasicPay)/100;
}
void Employee:: computeNP()
{
    NP=GP-Deduction;
}
void Employee:: getData()
{
    cout<<Id<<"\t| "<<Name<<"\t| "<<BasicPay<<"\t\t| "<<Allowance<<"\t\t| "<<GP<<"\t| "<<Deduction<<"\t\t| "<<NP;
    cout<<"\n--------------------------------------------------------------------------------------------\n";
}
float Employee:: totalNP()
{
    static int sum;
    sum+=NP;
    return sum;
}
int main()
{
    int n;
    cout<<"----------------------------------------------------------------------------------------------------------------\n";
    cout<<"\n\t\t\t\t\t\tXYZ COMPANY\t\t\t\n";
    cout<<"----------------------------------------------------------------------------------------------------------------\n";
    cout<<"Enter the number of employees: ";
    cin>>n;
    Employee e[n];
    int i;
    float x;
    for(i=0;i<n;i++)
    {
    e[i].setData();
    e[i].computeAllowance();
    e[i].computeGP();
    e[i].computeDeduction();
    e[i].computeNP();
    x=e[i].totalNP();
    }

    cout<<"\n\nDetails\n\n";
    cout<<"\nId\t| Name\t| BasicPay\t| Allowance\t| GP\t| Deduction\t| NP\n";
    cout<<"--------------------------------------------------------------------------------------------\n";
    for(i=0;i<n;i++)
    {
        e[i].getData();
    }
    cout<<"\nThe grand total NP is: "<<x<<"\n\n";
    return 0;
}
