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
    void operator +(int a)
    {
        z=z+a;
        cout<<z;
    }
};
int main()
{
    Vector v2(20,30,40);
    int m=3;
    v2+m;
}
