#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int a,b,n,x,y,v,i;
    double s,t[10],minimum;
    cin>>a>>b;
    cin>>n;
    for(i=1;i<=n;i++)
    {
       cin>>x>>y>>v;
       s=sqrt((x-a)*(x-a)+(y-b)*(y-b));
       t[i]=s/v;
    }
    minimum=t[1];
    for(i=1;i<=n;i++)
    {
       if(t[i]<minimum)
         minimum=t[i];
    }
    printf("%.7llf\n",minimum);
}
