#include<iostream>
using namespace std;
class Vector
{
public:
    int x,y,z;
    Vector()
    {

    }
    Vector(int a,int b,int c)
    {
      x=a;
      y=b;
      z=c;
    }
    Vector operator +(Vector v)
    {
        Vector t;
        t.x=x+v.x;
        t.y=y+v.y;
        t.z=z+v.z;
        return t;
    }
     Vector operator *(Vector v)
    {
        Vector t;
        t.x=x*v.x;
        t.y=y*v.y;
        t.z=z*v.z;
        return t;
    }
    Vector operator -(Vector v)
    {
        Vector t;
        t.x=x-v.x;
        t.y=y-v.y;
        t.z=z-v.z;
        return t;
    }
    Vector operator /(Vector v)
    {
        Vector t;
        t.x=x/v.x;
        t.y=y/v.y;
        t.z=z/v.z;
        return t;
    }
    void show()
    {
        cout<<x<<endl<<y<<endl<<z;
    }

};

int main()
{
    Vector v1(1,2,3);
    Vector v2(10,20,30);
    Vector v3(100,200,300);
    Vector v4(5,6,7);
    Vector v5(5,8,9);

    Vector v6;
    v6=v1+v2*v3-v4/v5;
    v6.show();
}
