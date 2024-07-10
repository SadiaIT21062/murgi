#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string a,b;
    int i,t,s,sum,j,u;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>s;
        cin>>a>>b;
        sum=0;
        for(j=0; j<s; j++)
        {
            if(a[j]=='1')
            {
                for(u=0; u<s; u++)
                {
                    if(b[u]=='1')

                       sum=sum+abs(j-u);
                }
            }
        }
        cout<<sum<<endl;

    }

}

