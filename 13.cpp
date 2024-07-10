#include<iostream>
using namespace std;
class B{
private:
    int x;
public:
    void setValue(int m)
    {
        x=m;
    }
    int getData()
    {
       return x;
    }
    B()
    {
        cout<<"I am from base constructr"<<endl;
    }
};
class D:public B{
private:
    int y;
public:
    void setValue(int n)
    {
        y=n;
    }
    int getData()
   {
       return y;
   }
   D():B()
   {
       cout<<"I am from Derived constructor"<<endl;
   }
};
int main()
{
    D obj();
    int m,n;
    cin>>m>>n;
    obj.D::setValue(m);
    obj.B::setValue(n);




    cout<<ob.B::getData()<<endl<<ob.D::getData()<<endl;

}
