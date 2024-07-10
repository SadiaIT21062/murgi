#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int a,b,n,x,y,v,i;
    double s,t;
    vector<double>v1;
    cin>>a>>b;
    cin>>n;
    for(i=1;i<=n;i++)
    {
       cin>>x>>y>>v;
       s=sqrt((x-a)*(x-a)+(y-b)*(y-b));
       t=s/v;
       v1.push_back(t);
    }
    sort(v1.begin(),v1.end());
    printf("%.7llf\n",v1[0]);
}


