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
};
class B:public A
{
public:
    /*B():A()
    {
        cout<<"I am from B"<<endl;
    }*/
    B(int b):A()
    {
        cout<<"I am from B parameterized constructor"<<endl;
    }
};
int main()
{
    //B ob;
    B bo(10);
}
