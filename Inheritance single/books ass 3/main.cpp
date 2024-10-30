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
    Books(){}
    void setData(int x, string y);
    void displayBookDetails();
};
void Books::setData(int x,string y)
{
    Price=x;
    Publisher=y;
}
void Books::displayBookDetails()
{
    cout<<"\t\tPrice: "<<Price<<endl;
    cout<<"\t\tPublisher: "<<Publisher<<endl;
}

int main()
{
    LibraryResources Book[3]={LibraryResources(001,"LetusC","Yashwanth"),
                             LibraryResources(002,"DSA","Elliot"),

                         LibraryResources(003,"C++","Sam")};
    Books Bk1,Bk2,Bk3;
    Bk1.setData(300,"Peng");
    Bk2.setData(200,"Reed");
    Bk3.setData(250,"West");
    Book[0].diaplayData();
    Bk1.displayBookDetails();

    Book[1].diaplayData();
    Bk2.displayBookDetails();

    Book[2].diaplayData();
    Bk3.displayBookDetails();

}
