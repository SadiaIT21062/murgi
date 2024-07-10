#include<iostream>
using namespace std;
int main()
{
    int n,p,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>p;
        if(abs(p)<=100)
        {
            if(p>=0)
            cout<<p+2<<' ';
            else
            cout<<p<<' ';

        }

    }
}
