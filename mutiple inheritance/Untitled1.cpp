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
    void diaplayData();
};
void LibraryResources::diaplayData()
{
    cout<<"\t\tID:\t"<<Id<<endl;
    cout<<"\t\tTitle: "<<Title<<endl;
    cout<<"\t\tAuthor: "<<Author<<endl;

}

class Books:public LibraryResources
{
private:
    int Price;
    string Publisher;
public:
    Books(int x,string y)
    {
        Price=x;
        Publisher=y;
    }
    void displayBookDetails();
};

void Books::displayBookDetails()
{
    cout<<"\t\tPrice: "<<Price<<endl;
    cout<<"\t\tPublisher: "<<Publisher<<endl;
}
class ReferenceBook:public LibraryResources
{
private:
    int LockTime;
public:
    ReferenceBook(int x)
    {
        LockTime=x;
    }
    void displayInfo();
};
void ReferenceBook::displayInfo()
{
    cout<<"\t\tLocking Period: "<<LockTime<<endl;
}
int main()
{
    LibraryResources Book[3]={LibraryResources(001,"LetusC","Yashwanth"),
                              LibraryResources(002,"DSA","Elliot"),
                              LibraryResources(003,"C++","Sam")};
    Books Bk[3]={Books(300,"Peng"),Books(200,"Reed"),Books(250,"West")};

    ReferenceBook b1(3);
cout<<"-----------------------------------------------------------------------------------------"<<endl;
    Book[0].diaplayData();
    Bk[0].displayBookDetails();

cout<<"-----------------------------------------------------------------------------------------"<<endl;

    Book[1].diaplayData();
    Bk[1].displayBookDetails();
    b1.displayInfo();

cout<<"-----------------------------------------------------------------------------------------"<<endl;

    Book[2].diaplayData();
    Bk[2].displayBookDetails();
cout<<"-----------------------------------------------------------------------------------------"<<endl;
}
