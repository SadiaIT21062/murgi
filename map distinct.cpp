#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,k,x,y,z,m,f;
    cin>>a>>b>>k;//50 55 6
    x=min(a,b);//50
    y=max(a,b);//55
    z=y-x;//5


     if(z<=k)
    {
        m=k-z;//6-5=1
        x=x+z;//55
        f=m/2;//0
        if(m%2==0)
        {x=x+f;//55
        y=y+f;//33
        }
        else
        {
            x=x+f+1;
            y=y+f;
        }
    }
    else
        x=x+k;
    cout<<x*y<<endl;


}
