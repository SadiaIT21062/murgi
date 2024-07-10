#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i,k[236],c,j,a[3000],l,m;
    while(cin>>n)
    {
        if(n==0)
            exit(0);
        c=0;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        l=1;
        for(i=1;i<n;i++)
        {
            k[l]=abs(a[i+1]-a[i]);
            l++;

        }
        for(i=l-1;i>=1;i--)
        {
            m=0;
            for(j=i-1;j>=1;j--)
            {
                if(k[j]==k[i])
                {
                    m=1;
                    break;
                }
            }
            if(m==0&&k[i]>=1&&k[i]<=n-1)
                c++;
        }
        if(c==n-1)
            cout<<"Jolly"<<endl;
        else
            cout<<"Not jolly"<<endl;
    }
}
