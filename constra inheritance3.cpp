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
        cout<<" destructor a"<<endl;
    }
};
class C
{
    public:
    C()
    {
        cout<<"I am from C"<<endl;
    }
    C(int C)
    {
        cout<<"I am from C parameterized constructor"<<endl;
    }
    ~C()
    {
        cout<<" destructor c"<<endl;
    }
};
class B:public A,public C
{
public:
    B():C(),A()
    {
        cout<<"I am from B"<<endl;
    }
    B(int b):A(b),C(b)
    {
        cout<<"I am from B parameterized constructor"<<endl;
    }
    ~B()
    {
        cout<<" destructor b"<<endl;
    }
};
int main()
{
    B ob,s;
    B bo(10);
}

