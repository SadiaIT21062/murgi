#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,mx;
    cin>>t;
    while(t--)
    {
        cin>>n;
        mx=0;
        vector<int>a(n+1);
        vector<int>b(n+1);
        int x;
        x=0;
        for(i=1; i<=n; i++)
        {
            cin>>a[i]>>b[i];
            if(a[i]<=10)
            {
                mx=max(mx,b[i]);
                if(x!=mx)
                {
                   j=i;
                }
                    x=mx;
            }
        }

        cout<<j<<endl;
    }

}
