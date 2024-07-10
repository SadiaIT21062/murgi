#include<iostream>
using namespace std;
class Vector
{
public:
    int x,y,z;
    Vector(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    Vector()
    {

    }
    Vector operator +(Vector v)
    {
        Vector t;
        t.x=x+v.x;
        t.y=y+v.y;
        t.z=z+v.z;
        return t;
    }
    void show()
    {
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
};
int main()
{
    Vector v1(10,20,30);
    Vector v2(1,2,3);
    Vector v3(100,200,300);
    Vector v4;
    v4=v1+v2+v3;
    v4.show();
}
