#include <iostream>
#include<string.h>
using namespace std;
//Non-Member function as a friend
class Patient;
class Doctor
{
private:
    int DoctorId;
    string Dname;
    string Specialization;
    static int cnt;
public:
    Doctor(int x, string y, string z)
    {
        DoctorId=x;
        Dname=y;
        Specialization=z;
    }
   friend void findpatient(Patient p[], Doctor d[]);
   void countMyPatients(Patient p[],Doctor d[]);
   void getData();
};
int Doctor::cnt=0;
class Patient
{
private:
    int patientId;
    string Pname;
    int DoctorId;
    string Disease;
public:
    Patient () {};
    Patient (int x, string y, int z, string l)
    {
        patientId=x;
        Pname=y;
        DoctorId=z;
        Disease=l;
    }
    friend void findpatient(Patient p[], Doctor d[]);
    friend void Doctor::countMyPatients(Patient p[],Doctor d[]);
    void getData();

};
void Patient::getData()
{

    cout<<patientId<<"\t\t "<<Pname<<"\t\t "<<DoctorId<<"\t\t"<<Disease<<"\n";
}
void Doctor::getData()
{
    cout<<DoctorId<<"\t\t  "<<Dname<<"\t\t  "<<Specialization<<"\n";
}
void findpatient(Patient P[], Doctor d[])
{
    string name;
    int i,x;
    cout<<"\nEnter Doc Name: ";
    cin>>name;
    cout<<"\nPatient Doctor\n";
    for(i=0;i<2;i++)
    {
         if(name==d[i].Dname)
             x=d[i].DoctorId;
    }
    for(i=0;i<3;i++)
    {
             if(x==P[i].DoctorId)
             {
                 cout<<P[i].Pname<<"\t"<<name<<"\n";
                 d[0].cnt++;
             }
    }

}
void Doctor::countMyPatients(Patient p[], Doctor d[])
{
   cout<<"\nNo of patients for"<<d[0].Dname<<": "<<d[0].cnt;
}
int main()
{
    int i;
    Patient p[3]={Patient(123,"Ram",1,"IV block"),Patient(345,"Raj",2,"Brain Cancer"),Patient(678,"Ravi",1,"BP")};
    Doctor d[2]={Doctor(1,"Disha","Cardio"),Doctor(2,"Dev","Neuro")};
    cout<<"Patient Id \t Patient Name \t Doctor id \t Disease\n";
    for(i=0;i<3;i++)
    p[i].getData();
    cout<<"\n\n";
    cout<<"Doctor Id \t Doctor Name \t Specialization\n";
    for(i=0;i<2;i++)
    d[i].getData();
    findpatient(p,d);
    d[i].countMyPatients(p,d);
}
