#include<iostream>
using namespace std;
class A
{
public:
    virtual void show()
    {
        cout<<"I am from A"<<endl;
    }
};
class B:public A
{
public:
    virtual void show()
    {
       cout<<"I am from B"<<endl;
    }
};
int main()
{
    A a;
    B b;

    A *ptr;

    ptr=&a;
    ptr->show();
    ptr=&b;
    ptr->show();

}
