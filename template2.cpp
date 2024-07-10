#include<iostream>
using namespace std;
template<class T>
T swapp(T x,T y)
{
    T temp;
    temp=x;
    x=y;
    y=temp;
    cout<<x<<" "<<y<<endl;
}
int main()
{
    swapp(20,30);
    swapp(100.25,100.15);
}
