#include<iostream>
using namespace std;
int main()
{
    int n,t,i,a,b,c,x,p;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        x=n/3;
        p=n%3;
        if(p==1)
            c=x+1;
        else if(p==2)
        {
            c=x+1;
            b=x+1;
        }
        else
        {
            a=x;
            b=x;
            c=x;
        }
        cout<<a<<" "<<b<<" "<<c<<endl;

    }
}
