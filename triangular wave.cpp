#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,f,i,j,k;
    cin>>t;

    while(t--)
    {
        //getchar();getchar();
        cin>>a>>f;
        for(k=1;k<=f;k++)
        {
            for(i=1;i<=a;i++)
            {
                for(j=1;j<=i;j++)
                    cout<<i;
                   cout<<endl;
            }
            for(i=a-1;i>=1;i--)
            {
                for(j=1;j<=i;j++)
                    cout<<i;
                   cout<<endl;
            }
            if(k!=f)
              cout<<endl;
        }
        if(t)
            cout<<endl;
    }
}
