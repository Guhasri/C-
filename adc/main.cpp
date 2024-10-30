#include <iostream>
using namespace std;

class Employee
{
private:
    int ID;
    string Name;
    float BasicPay;
    float Allowance;
    float Deduction;
    float GP;
    float NP;
public:
    void setData();
    void computeAllowance();
    void computeGP();
    void computeDeduction();
    void computeNP();
    void getData();
};

void Employee :: setData()
{
    cout << "Enter ID, Name, Basic pay of the employee : ";
    cin >> ID >> Name >> BasicPay;
}
void Employee :: computeAllowance()
{
    Allowance = ((float)85/100)*BasicPay;
}
void Employee :: computeGP()
{
    GP= BasicPay+Allowance;
}
void Employee :: computeDeduction()
{
    Deduction = ((float)15/100)*GP;
}
void Employee :: computeNP()
{
    NP = GP-Deduction;
}
void Employee :: getData()
{
    cout << "Details of the employee are : "<< endl;
    cout << "ID : " << ID << endl;
    cout << "Name : " << Name << endl;
    cout << "Basic Pay : " << BasicPay << endl;
    cout << "Allowance : " << Allowance << endl;
    cout << "Gross Pay : " << GP << endl;
    cout << "Net Pay : " << NP << endl;
    cout << "Deduction : " << Deduction << endl;
}

int main()
{
    Employee Arjun;
    Arjun.setData();
    Arjun.computeAllowance();
    Arjun.computeGP();
    Arjun.computeDeduction();
    Arjun.computeNP();
    Arjun.getData();
}
