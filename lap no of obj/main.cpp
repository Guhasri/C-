


/******************************************************************************
Resource Allocation - One Project can be allocated many laptops - Friend class, Frienf func, DEfault value argument constructor, Call by Reference, constant Member Function used

*******************************************************************************/
#include <iostream>
using namespace std;
class Laptop;

class Project;

class Project{
    string PId;
    string PName;
    int ResourceCount;
    
    public :
    Project(){}
    Project( string x, string y, int z=0){ PId =x; PName = y; ResourceCount=z;}
    void findMyTotResourcePrice(Laptop laptop[]);
    void displayResourceCount()
    {
        cout<<"\nNumber of Laptops of "<<PId<<" = "<<ResourceCount;
    }
    friend Laptop;
};

class Laptop
{
    int Id;
    int Price;
    string Status;
    string ProjectId;
    public :
    Laptop(){}
    Laptop(int x, int y, string z="Idle",string i="0") // default value argument 
    { 
      Id = x;  
      Price =y;
      Status =z;
      ProjectId =i;
    }
    void allocateLaptopToProj(Project p[]);
    void returnLaptop(Project p[]);
    void transferResource(Project &p1, Project &p2);
    void displayLaptop() const
    {
        cout<<"\n LapTop Id  = "<<Id;
        cout<<"\t Price      = "<<Price;
        cout<<"\n Status     = "<<Status;
        cout<<"\t ProjectId  = "<<ProjectId;
    }
 friend void Project :: findMyTotResourcePrice(Laptop laptop[]);
};

void Laptop ::allocateLaptopToProj(Project p[])
{   
   cout<<"\n\n Enter the Project ID (P1/P2)";
   cin>>ProjectId;
   Status ="Allocated"; 
   
   if (ProjectId =="P1")
      p[0].ResourceCount +=1;
   else
      p[1].ResourceCount +=1;   
 }
    
void Laptop::returnLaptop(Project p[])
{
   if (ProjectId =="P1")
      p[0].ResourceCount -=1;
   else
      p[1].ResourceCount -=1;   
    ProjectId=" ";
    Status ="Idle";//laptop is available for allocation
    
}
void Laptop::transferResource(Project &p1, Project &p2)
{
    ProjectId =p2.PId;
    p1.ResourceCount=p1.ResourceCount-1;
    p2.ResourceCount=p2.ResourceCount +1;
    
}

void Project :: findMyTotResourcePrice(Laptop laptop[])
{
    int TotPrice=0;
    for(int i=0;i<4;i++)
        if (laptop[i].ProjectId == PId)
            TotPrice = TotPrice +laptop[i].Price;
    cout<<"\n\n  Total Price of allocated REsources of Project : "<<PId<<" = "<<TotPrice;
}

int main() 
{
    Laptop laptop[4] = {
                    Laptop(101,1000),
                    Laptop(102,2000),
                    Laptop(103,3000),
                    Laptop(104,4000)
                   };
    Project P[] = {
                    Project("P1","XXX"),
                    Project("P2","YYY")
                  };
     cout<<" Resource Allocation - Laptops Allocated to Projects";            
                  
    for(int i=0; i<4;i++)
    {
        cout<<endl;
        cout<<"\n Before Allocation ....."<<endl;
        laptop[i].displayLaptop();
        
        laptop[i].allocateLaptopToProj(P);
        
        cout<<"\n After Allocation ....."<<endl;
        laptop[i].displayLaptop();
    }

    laptop[0].returnLaptop(P);
    cout<<"\n After Returning Laptop ...."<<endl;
    laptop[0].displayLaptop();
    
    P[0].findMyTotResourcePrice(laptop);
    P[0].displayResourceCount();
    
    laptop[0].transferResource(P[0],P[1]);
    cout<<"\n After transferring  Laptop from Projecr 1 to Project 2...."<<endl;
    laptop[0].displayLaptop();
    P[0].displayResourceCount();
    P[1].displayResourceCount();
    
    
    
    return 0;
}

