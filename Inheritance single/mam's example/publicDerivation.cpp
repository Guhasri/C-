#include <iostream>
using namespace std;

void printHeading();
void printFooter();


class Emp
{
private:

 int Id;
 string Name;

  public:
     Emp(){}
     Emp(int x, string y){Id=x; Name= y;}
     void setData(int x, string y);
     void displayData();
};

void Emp::setData(int x, string y)
{

         Id=x; Name=y;

}
void Emp::displayData()
{

         cout<<"\t\t\t ID         : "<<Id<<endl;
         cout<<"\t\t\t Name       : "<<Name<<endl;
}


class SalariedEmp:public Emp
{

private:
    int BP;
    int All;
    int Ded;
public :
    SalariedEmp(){}
    void setInfo(int x, int y, int z);
    void displayInfo();
};

   void SalariedEmp::setInfo(int x, int y, int z)
   {

        BP=x;
        All=y;
        Ded=z;
    }

    void SalariedEmp::displayInfo()
    {
         cout<<"\t\t\t BP          : "<<BP<<endl;
         cout<<"\t\t\t Allowance   : "<<All<<endl;
         cout<<"\t\t\t Deduction   : "<<Ded<<endl;

    }



int main()
{
    printHeading();

    cout<<"\t\t\t Object ::John" <<endl<<endl;

    Emp John(101,"John");
    John.displayData();

    cout<<"\n\t\t\t Object ::Ram" <<endl<<endl;
    SalariedEmp Ram;

    Ram.setData(102,"RAM");
    Ram.setInfo(10000,200,300);

    Ram.displayData();
    Ram.displayInfo();
    printFooter();
}



void printHeading()
{
    cout<<endl;
    cout<<"\t\t\t\t\t                        Public Derivation                        \n";
    cout<<"\t\t\t\t\t  ==[ DErived Objects can access Public Members of Base Class ]== \n";
    cout<<"\t\t\t\t\t  ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n\n";

}
void printFooter()
{
    cout<<"\n\n";
    cout<<"\t\t\t\t\t\t\t  ==[ PGM ENDS ]== \n"<<endl;


}





