//wrong answer on test 2;
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,i,j,mn,x,y,l,z,p,q;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;//1 2
        x=0,y=0,z=0,p=0,q=0,l=0;
        vector<int>v(n);//10
        for(i=0;i<n;i++)
        {
            cin>>v[i];//10
        }

        if(n==1)
            cout<<0<<endl;
        else
        {
        sort(v.begin(),v.end());
        vector<int>dif;
        for(i=0;i<=n-2;i++)
        {
           dif.push_back(v[i+1]-v[i]);
        }
       //for(int f:dif)
            //cout<<f<<' ';
        for(i=0;i<=n-2;i++)
        {
            if(dif[i]>k)
                {x=n-(i+1);break;}
        }
        //cout<<x<<endl<<endl;
        for(j=n-2;j>=0;j--)
        {
             if(dif[j]>k)
                {y=(j+1);break;}
        }
        //cout<<y<<endl<<endl;
        mn=min(x,y);

        int mid=dif.size()/2;
        for(i=mid-1;i>=0;i--)
        {
            if(dif[i]>k)
            {
                p=i+1;
                break;
            }
        }
        for(i=mid;i<dif.size();i++)
        {
            if(dif[i]>k)
            {
                q=n-i-1;
                break;
            }
        }
        z=p+q;
        l=min(z,mn);
        cout<<l<<endl;
        }
    }
}
