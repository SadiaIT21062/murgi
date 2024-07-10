#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,i,flag,j,k,m;
    long int n;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>m>>n;
        for(j=m; j<=n; j++)
        {
                flag=0;
                for(k=2; k<=sqrt(j); k++)
                {
                    if(j%k==0)
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0 && j!=1)
                    cout<<j<<endl;
        }
        cout<<endl;
    }
}
