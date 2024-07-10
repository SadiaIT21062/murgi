#include<iostream>
using namespace std;
class shape
{
public:
    double a,b,area;
    void getdata()
    {
        cin>>a>>b;
    }
    virtual void display()=0;
};
class triangle:virtual public shape
{
public:
    void display()
    {
        area=0.5*a*b;
        cout<<area<<endl;
    }
};
class rectangle: public shape
{
public:
    void display()
    {
        area=a*b;
        cout<<area<<endl;
    }
};
int main()
{
    rectangle ob;
    triangle bo;
    ob.getdata();
    ob.display();
    bo.getdata();
    bo.display();
}
