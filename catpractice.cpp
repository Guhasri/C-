#include <iostream>
#include <fstream>
using namespace std;

class Date
{
    int dd, mm, yy;

public:
    Date() {}
    Date(int x, int y, int z) : dd(x), mm(y), yy(z) {}
    void display() const
    {
        cout << "\nDate: " << dd << " " << mm << " " << yy << endl;
    }
};

class Student
{
    string name;
    Date d;
    string status;

public:
    Student() {}
    Student(string x, int d, int m, int y, string z) : name(x), d(d, m, y), status(z) {}
    void writeData(Student s[]);
    void readData();
    void appendData();
    void displayData() const;
};

void Student::appendData()
{
    Student sa;
    string nm, status;
    cout << "\nEnter name and status: ";
    cin >> nm >> status;
    sa.name = nm;
    sa.status = status;
    ofstream obj("Attendance.txt", ios::app);
    obj.write((char* )&sa, sizeof(Student));
    obj.close();
}

void Student::writeData(Student s[])
{
    ofstream outfile("Attendance.txt", ios::out);
    for (int i = 0; i < 2; i++)
    {
        outfile.write((char*)&s[i], sizeof(Student));
    }
    outfile.close();
}

void Student::displayData() const
{
    cout << "\n Name: " << name << endl;
    cout << "\n Status: " << status << endl;
}

void Student::readData()
{
    Student sa;
    ifstream infile("Attendance.txt", ios::in);
    while (!infile.eof())
    {
        infile.read((char *)&sa, sizeof(Student));
        if (!infile.eof())
        {
            sa.displayData();
        }
    }
    infile.close();
}


int main()
{
    Student s[2] = {Student("Ram", 12, 3, 2023, "Present"), Student("Ravi", 12, 3, 2023, "Absent")};
    s[0].writeData(s);
    s[0].appendData();
    s[0].readData();


    return 0;
}
