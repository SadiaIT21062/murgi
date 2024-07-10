#include<iostream>
using namespace std;
class B1
{
private:
    int x;
public:
    void setValue(int value)
    {
        x=value;
    }
    int getValue()
    {
        return x;
    }
    B1(int a)
    {
        cout<<"I am from constructor B1"<<endl;
    }
};
class B2
{
private:
    int y;
public:
    void setValue(int val)
    {
        y=val;
    }
    int getValue()
    {
        return y;
    }
    B2(int c)
    {
        cout<<"I am from constructor B2"<<endl;
    }
};
class V
{
private:
    int k;
public:
    void setValue(int h)
    {
        k=h;;
    }
    int getValue()
    {
        return k;
    }
   V(int d)
    {
        cout<<"I am from constructor V"<<endl;
    }
};
class D:public B1,public B2,public virtual V{
private:
    int z;
public:
    void setValue(int v)
    {
        z=v;
    }
    int getValue()
    {
        return z;
    }
    D(int b):B1(b),B2(b),V(b)
    {
        cout<<"I am from D constructor"<<endl;
    }
};
int main()
{
    D obj(12);
    int value,val,v;
    cin>>value>>val>>v;
    obj.B1::setValue(value);
    obj.B2::setValue(val);
    obj.D::setValue(v);
    cout<<obj.B1::getValue()<<endl<<obj.B2::getValue()<<endl<<obj.D::getValue();
}

