#include<bits/stdc++.h>
using namespace std;
int i,j,n,mark[100],siz;
int main()
{
    cin>>n;
    vector<int>prime;
    int limit=sqrt(n*1.0)+2;
    mark[1]=1;
    for(i=4;i<=n;i=i+2)
    {
        mark[i]=1;
    }
    prime.push_back(2);
    for(i=3;i<=n;i=i+2)
    {
        if(mark[i]!=1)
        {
            prime.push_back(i);
            if(i<=limit)
            {
                for(j=i*i;j<=n;j=j+2*i)
                {
                    mark[j]=1;
                }
            }
        }
    }
    siz=prime.size();
    for(i=0;i<siz;i++)
        cout<<prime[i]<<" ";
}
