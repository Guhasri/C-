#include <iostream>
using namespace std;
class Student
{
private:
    string Name;
    int RollNo;
    string Dept;
    int marks[3];
public:
    void setData();
    void getData();
};
void Student::setData()
{
    cout<<"Enter\nName,Roll No and Dept: ";
    cin>>Name>>RollNo>>Dept;
    cout<<"Enter marks: ";
    int i;
    for(i=0;i<3;i++)
    {
        cin>>marks[i];
    }
}
void Student::getData()
{
    cout<<Name<<"\t"<<RollNo<<"\t"<<Dept<<"\t";
    int i;
    for(i=0;i<3;i++)
    {
        cout<<marks[i]<<" ";
    }
}
int main()
{
    Student s;
    s.setData();
    s.getData();
}
