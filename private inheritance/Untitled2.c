#include <iostream>
using namespace std;

class LibraryResources
{
private:
    int Id;
    string Title;
    string Author;
public:
    LibraryResources(){}
    LibraryResources(int x,string y,string z)
    {
        Id=x;
        Title=y;
        Author=z;
    }
    void setInfo(int x,string y,string z);
    void displayData();
};
void LibraryResources::setInfo(int x,string y,string z)
{
        Id=x;
        Title=y;
        Author=z;
}
void LibraryResources::displayData()
{
    cout<<"\t\tID:\t"<<Id<<endl;
    cout<<"\t\tTitle: "<<Title<<endl;
    cout<<"\t\tAuthor: "<<Author<<endl;

}

class Books:private LibraryResources
{
private:
    int Price;
    string Publisher;
public:
    Books(){}
    void setData(int x, string y,int z,string l,string m);
    void displayBookDetails();
};
void Books::setData(int x, string y,int z,string l,string m)
{
    setInfo(z,l,m);
    Price=x;
    Publisher=y;
}
void Books::displayBookDetails()
{
    displayData();
    cout<<"\t\tPrice: "<<Price<<endl;
    cout<<"\t\tPublisher: "<<Publisher<<endl;
}

int main()
{
    cout<<"-----------------------------------------------------------------------------------------"<<endl;
    cout<<"\n";
    cout<<"\t\tPrivate Inheritance"<<endl;
    cout<<"-----------------------------------------------------------------------------------------"<<endl;
    cout<<"\n\n";
    Books B[3];
    B[0].setData(300,"Peng",001,"LetusC","Yashwanth");
    B[1].setData(200,"Wes",002,"DSA","Elliot");
    B[2].setData(250,"XYZ",003,"C++","Sam");
    int i;
    for(i=0;i<3;i++)
    {
        B[i].displayBookDetails();
        cout<<"-----------------------------------------------------------------------------------------"<<endl;
    }

}
