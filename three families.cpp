#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,x,y,z,i,ans;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>x>>y>>z;
        ans=((2*x-y)*z)/(x+y);
        cout<<ans<<endl;
    }
}
