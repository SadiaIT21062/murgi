#include<iostream>
using namespace std;
class Vector
{
    public:
    int x,y,z,k;
    Vector(int a,int b,int c)
    {
       x=a;
       y=b;
       z=c;
    }
    void operator +(Vector v)
    {
        x=x+v.x;
        cout<<x;
    }
};
int main()
{
    Vector v1(10,20,30);
    Vector v2(1,2,3);
    v1+v2;
}
