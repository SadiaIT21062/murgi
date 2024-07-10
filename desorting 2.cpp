#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,c,k,n,j,mn;
    cin>>t;
    while(t--)
    {
        cin>>n;
        mn=1000000000;
        c=0;
        vector<int>a(n+1);
        vector<int>operation(n);
        for(i=1; i<=n; i++)
            cin>>a[i];
        for(i=1; i<n; i++)
        {
            if(a[i+1]<a[i])
            {
                cout<<0<<endl;
                c=1;
                break;
            }
        }
        if(c==0)
        {
            for(i=1; i<n; i++)
            {
                operation[i]=((a[i+1]-a[i])/2)+1;
                //cout<<operation[i]<<endl;
                mn=min(mn,operation[i]);

            }
            cout<<mn<<endl;
        }

    }
}
