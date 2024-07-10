#include<iostream>
using namespace std;
class Bindu
{
public:
    int value;
    void setdata(int x)
    {
        //cin>>x;
        value=x;
    }
    int getdata()
    {

        cout<<value<<endl;
        cout<<"I am from Bindu"<<endl;
    }

};
class Rifat:public Bindu
{
public:

    int p=8;

};
int main()
{
    Rifat obj;
    int y;
    cin>>y;
    obj.setdata(y);
    obj.getdata();
    cout<<obj.p<<endl;
}
