#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[7]={4,-9,3,7,1,0,2};
    int sum[8],i,j,p,q,r;
    sum[-1]=0;
    for(i=0;i<=7;i++)
    {
        sum[i]=sum[i-1]+a[i];
    }
    //a[p] to a[q] sum
    cin>>p>>q;
        cout<<sum[q]-sum[p-1];
}
