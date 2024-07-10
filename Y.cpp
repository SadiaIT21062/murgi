#include<iostream>
using namespace std;
int main()
{
    int a,b,c,x;
    double p;
    cin>>a>>b>>c>>x;

    if(x<=a)
        cout<<"1.000000000000"<<endl;
    else if(x>a&&x<=b)
    {
        p=(1.0)*c/(b-a);
        cout<<p<<endl;
    }
    else if(x>b)
        cout<<"0.000000000000"<<endl;

}
