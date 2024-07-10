#include<iostream>
using namespace std;
class D2
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

};
class D1:public D2
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

};
class D:public D1{
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

};
class B:public D{
private:
    int l;
public:
    void setValue(int k)
    {
        l=k;
    }
    int getValue()
    {
        return l;
    }

};
int main()
{
    B obj;
    int value,val,v,k;
    cin>>value>>val>>v>>k;
    obj.D1::setValue(value);
    obj.D2::setValue(val);
    obj.D::setValue(v);
    obj.B::setValue(k);
    cout<<obj.D1::getValue()<<endl<<obj.D2::getValue()<<endl<<obj.D::getValue()<<endl<<obj.B::getValue();
}

