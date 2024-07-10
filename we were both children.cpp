#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,n,sum,mx;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>a(n+1);
        map<int,int>mp;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];//1 2 3 4 5
            mp[a[i]]++;
        }

        mx=0;
        for(i=1;i<=n;i++)//i=4
        {
            sum=0;
            for(j=1;j*j<=i;j++)//j=2
            {
                if(i%j==0)
                {
                    if(j!=(i/j))
                    sum=sum+mp[j]+mp[i/j];//1+1
                    else
                        sum=sum+mp[j];
                }

            }
            mx=max(mx,sum);//2
        }

       cout<<mx<<endl;

    }
}

