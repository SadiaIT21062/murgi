#include<iostream>
using namespace std;
class A
{
public:
    A(int a)
    {
        cout<<"I am from A parameterized constructor"<<endl;
    }
};
class B:public A
{
public:
    B(int b):A(b)
    {
        cout<<"I am from B parameterized constructor"<<endl;
    }
};
int main()
{
    B bo(10);
}

