#include<iostream>
using namespace std;
class country{
    public:
    void display()
    {
        cout<<"I a from country"<<endl;
    }
};
class state:public country{
    public:
        int y=13; int x=7;
    void show()
    {
        cout<<"I am from state"<<endl;
    }
};
class city:public state{
public:

    void watch()
    {
        cout<<"I am from city and y="<<y<<" is from state"<<endl;
    }
} ;
class village:public state{
public:

    void see()
    {
        cout<<"I am from village and x="<<x<<" is from state"<<endl;
    }
};
int main()
{
    village ob;
    ob.x;

    city bo;
    bo.y;

    bo.display();
    ob.show();
    bo.watch();
    ob.see();
}

