#include<iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout<<"I am from A"<<endl;

    }
    A(int a)
    {
        cout<<"I am from A parameterized constructor"<<endl;
    }
    ~A()
    {
        cout<<"destructor A"<<endl;
    }
};
class B:public A
{
public:
    B()
    {
        cout<<"I am from B"<<endl;
    }

    B(int b):A(b)
    {
        cout<<"I am from B parameterized constructor"<<endl;
    }
    ~B()
    {
        cout<<"destructor B"<<endl;
    }
};
int main()
{
    B bo(100);
    B ob,s;
}

