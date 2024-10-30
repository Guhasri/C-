#include <iostream>
using namespace std;

class Patients
{
protected:
        int Id;
        long long int AadharNo;
        string Address;
public:
        Patients(){}
        Patients(int x,long long int y,string z)
        {
            Id=x;
            AadharNo=y;
            Address=z;
        }

        //bool operator <(const markreprt& other)const{
        //return calculateTotalMarks()<other.calculateTotalMarks();
        //}
        virtual void calculateTotalAmount()=0;

};

class InPatient
{
    protected:
        int RoomRent;
        int MedicineCharges;
        int ConsultationCharge;
    public:
        InPatient(){}



};

int main()
{

}
