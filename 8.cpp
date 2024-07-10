#include<iostream>
using namespace std;
class base
{
protected:
    int x;
public:
    int y=10;
    void setValue()
    {
        int value;
        cin>>value;
        x=value;
    }
    int getValue()
    {
        return x;
    }
};
class derived:public base{

public:
    void show()
    {
        cout<<"I am from show"<<endl;
    }

};
int main()
{
    derived obj;
    obj.setValue();
    cout<<obj.getValue()<<endl<<obj.y<<endl;
    obj.show();
}
