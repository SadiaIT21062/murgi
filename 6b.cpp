#include<iostream>
using namespace std;
int staticfun()
{
    cout<<"static variables: ";
    static int count=0;
    count++;
    return count;
}
int nonstaticfun()
{
    cout<<"For non-static variables:";
    int count=0;
    count++;
    return count;
}
int main()
{
    cout<<staticfun()<<"\n";
    cout<<staticfun()<<"\n";
    cout<<staticfun()<<"\n";
    cout<<nonstaticfun()<<"\n";
    cout<<nonstaticfun()<<"\n";
}
