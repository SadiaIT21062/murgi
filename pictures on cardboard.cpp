#include<bits/stdc++.h>
using namespace std;
int t,n,c,i,l=0,r=1000000000,mid,area,x,y;
vector<int>v;
int ans(int mid)
{
    area=0;
    for(i=0;i<v.size();i++)
    {
        x=v[i]+mid*2;
        area=area+(x*x);
    }
    return area;
}
int solve()
{
    while(l<=r)
    {
        mid=(l+r)/2;
        if(ans(mid)==c)
            return mid;
        else if(ans(mid)>c)
            r=mid-1;
        else if(ans(mid)<c)
            l=mid+1;

    }
}

int main()
{
    //int t,n,c,i,l=0,h=1000000000,mid;
    cin>>t;
    while(t--)
    {
        cin>>n>>c;
        for(i=0; i<n; i++)
        {
            cin>>y;
            v.push_back(y);
        }
        int a=solve();
        cout<<a<<endl;
        v.clear();
    }
}
