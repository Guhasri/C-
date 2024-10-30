#include <iostream>

using namespace std;
class Watch
{
private:
    int ModelId;
    string Brand;
    int Quantity;
public:
    Watch(int x, string  y, int z)
    {
        ModelId=x;
        Brand=y;
        Quantity=z;
    }
    void display();
    void modifyQuantity(int i);
};
void Watch::modifyQuantity(int i)
{
        cout<<"\nEnter the quantity of watch "<<i+1<<": ";
        cin>>Quantity;
}
void Watch::display()
{
    cout<<"\n-------------------------";
    cout<<"\n|ModelId| Brand  |Quantity|";
    cout<<"\n-------------------------";
    cout<<"\n|"<<ModelId<<"\t|"<<Brand<<"  |"<<Quantity<<"\t  |";
    cout<<"\n-------------------------";
}

int main()
{
    int i;
    //={{123,"Fossil",1},{345,"Rolex",1},{456,"Titan",2}};
    Watch w[2]={{123,"Fossil",1},{345,"Rolex",1}};
    Watch *wt;
    wt=w;
    cout<<"Enter\n1-To modify quantity and display data\n2-To display data\n";
    int x;
    cin>>x;
    switch(x)
    {
        case 1:
        for(i=0;i<2;i++)
        {
            w[i].modifyQuantity(i);
            w[i].display();
        }
        break;
        case 2:
            for(i=0;i<2;i++)
        {
            w[i].display();
        }
    }

    return 0;
}
