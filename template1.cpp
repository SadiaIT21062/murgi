#include<iostream>
using namespace std;
template<class T>
T area(T x,T y)
{
    T z=0.5*x*y;
    return z;
}
int main()
{
    cout<<area(20,30)<<endl;
    cout<<area(100.25,100.15)<<endl;
}
