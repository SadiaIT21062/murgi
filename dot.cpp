#include<iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout<<"I am from A";
    }
};
class B:public A
{
public:
    void show()
    {
        cout<<"I am from b";
    }
};
int main()
{
    B ob;
    ob.A::show();
    ob.B::show();
}
