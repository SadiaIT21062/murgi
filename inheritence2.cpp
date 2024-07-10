#include<iostream>
using namespace std;
class A
{
public:
    int x=20;

    void display()
    {
        cout<<"I am from A"<<endl;
    }

};
class B
{
   protected:
       int y;
   public:
    void setValue(int t)
    {
        y=t;
    }
    int getValue()
    {
        return y;
    }
};
class C:public A,public B
{
public:
    void show()
    {
        cout<<"I am from "<<y<<endl;
    }
};
int main()
{
    C st;
    st.setValue(15);
    cout<<st.x<<endl;
    cout<<st.getValue()<<endl;
    st.display();
    st.show();
}

