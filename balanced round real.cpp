#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,k,c,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;//5 1
        vector<int>v(n);
        for(i=0; i<n; i++)
        {
            cin>>v[i];//2 4 6 8
        }
        if(n==1)
            cout<<0<<endl;
        else
        {
        sort(v.begin(),v.end());
        int mx=1;
        for(i=0; i<=n-2; i++)//i=2
        {
            c=1;
            if(v[i+1]-v[i]<=k)//5-4=1<=1
            {
                j=i;//j=2
                while(v[j+1]-v[j]<=k&&j<n-1)//6-5=1
                {
                    c++;//3
                    j++;//4
                }
                i=j-1;//i=0
                mx=max(mx,c);//2
            }
        }
        cout<<n-mx<<endl;
        }
    }
}
