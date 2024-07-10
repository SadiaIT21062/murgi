#include<iostream>
using namespace std;
float diameter(float r)
{
    float d=2*r;
    return d;
}
float area(float r)
{
    float area=3.1416*r*r;
    return area;
}
float circumference(float r)
{
    float c=2*3.1416*r;
    return c;
}
int main()
{
    float r;
    cin>>r;

    cout<<"diameter="<<diameter(r)<<endl;
    cout<<"area="<<area(r)<<endl;
    cout<<"circumference="<<circumference(r)<<endl;
}
