#include <iostream>
using namespace std;

class College
{
private:
    int CollegeId;
    string Name;
    string Location;
public:
    College(int x,string y,string z)
    {
        CollegeId=x;
        Name=y;
        Location=z;
    }
    void displayCollege()
    {
        cout<<"College ID:  \t"<<CollegeId<<endl;
        cout<<"College Name:   "<<Name<<endl;
        cout<<"College Location:"<<Location<<endl;
    }
};

class Department:public College
{
    private:
        string DepName;
        string HOD;
        int NoOfProgrammes;
    public:
        Department(string x,string y,int z,int a,string b,string c):College(a,b,c)
        {
            DepName=x;
            HOD=y;
            NoOfProgrammes=z;
        }
        ~Department()
        {
            cout<<"Object Destroyed!!"<<endl;
        }
        void displayDepartment()
        {
            displayCollege();
            cout<<"Department Name: "<<DepName<<endl;
            cout<<"HOD Name:\t "<<HOD<<endl;
            cout<<"No Of Programmes:"<<NoOfProgrammes<<endl;
        }
};

int main()
{
        Department D[3]={Department("M.Sc","Dr.Devi",4,001,"CIT","Cbe"),Department("M.E","Dr.Sri",2,002,"VIT","Cbe"),
                        Department("B.Sc","Dr.Ram",3,003,"CEG","Chennai")};
        for(int i=0;i<3;i++)
        {
            D[i].displayDepartment();
            cout<<"\n===================================================================================================\n";
        }
}
