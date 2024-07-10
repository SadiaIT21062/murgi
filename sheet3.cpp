#include<iostream>
using namespace std;
class Address
{
    public:
    string houseNo,streetName,cityName,stateName,zipCode;

    ~Address()
    {
        cout<<"Destructor works";
    }

    Address(string h,string sr,string c,string st,string z)
    {
        houseNo=h;
        streetName=sr;
        cityName=c;
        stateName=st;
        zipCode=z;
    }
    void display()
    {
        cout<<"House no="<<houseNo<<endl<<"Street Name="<<streetName<<endl<<"city Name="<<cityName<<endl<<"State name="<<stateName<<endl<<"zipCode="<<zipCode<<endl;
    }
};
int main()
{
    Address s("345t","garission 10","Dhaka Cantonment","Bangladesh","1420");
    s.display();
}
