#include<iostream>
using namespace std;
class project
{

    public:
        int x,y;
    void input(int a,int b)
    {
        x=a;
        y=b;

    }
    project operator++()
    {
        ++x;
        ++y;
    }
    void show()
    {
        cout<<"x="<<x<<endl<<"y="<<y;
    }
};
int main()
{
    project p1,p2;
    p1.input(10,20);
    p2=++p1;
    p1.show();
    return 0;
}
