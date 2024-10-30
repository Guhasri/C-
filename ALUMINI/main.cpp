#include <iostream>
#include<string.h>
using namespace std;

class Tutor;
class Alumnus
{
    string aName;
    int aYear;
    string aProg;
    string mail;
    string Company;
    static int acnt;

public:
    Alumnus(string n,int y,string p,string m,string c)
    {
        aName=n;
        aYear=y;
        aProg=p;
        mail=m;
        Company=c;
        acnt++;

    }

    friend void findMyWards(Tutor T[],Alumnus A[]);
    static void findacnt()
    {
        cout<<"total number of alumnus:"<<acnt;
    }
};

int Alumnus::acnt=0;

class Tutor
{
    string tName;
    int tYear;
    string tProg;

public:
    Tutor(string n,int y,string p)
    {
        tName=n;
        tYear=y;
        tProg=p;
    }
    friend void findMyWards(Tutor T[],Alumnus A[]);
};

void findMyWards(Tutor T[],Alumnus A[])

{

   cout<<"Enter Staff Name: ";
   string tutorname;
   cin>>tutorname;
   int i;
    for(i=0;i<3;i++)
    {
        if(tutorname==T[i].tName)
        {
           // for(i=0;i<5;i++)
           // {
                if(A[i].Company=="TCS" && A[i].aYear== T[i].tYear)
                {
                    cout<<A[i].aName<<"\t"<<A[i].mail;
                }
           // }
        }

    }
}

int main()

{



    Tutor T[3]={Tutor("Dr.Umarani",2022,"SS"),Tutor("Dr.Jeyarani",2021,"DS"),Tutor("Dr.Aruna",2020,"DCS")};

    Alumnus A[5]={Alumnus("Dharsh",2022,"SS","7176xyz@gmail.com","TCS"),

                  Alumnus("Sathya",2021,"DS","7716@gmail.com","TCS"),

                  Alumnus("Kavya",2022,"DCS","7885abc@gmail.com","TCS"),

                  Alumnus("Deva",2020,"SS","7787@gmail.com","CTS"),

                  Alumnus("San",2021,"SS","1726@gmail.com","Infosys")};

    findMyWards(T,A);



}
