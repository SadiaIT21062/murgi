#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    if(n>0)
    {
        for(i=0; i<=n; i++)
        {
            cout<<i<<' ';
        }
        cout<<endl;
    }
    else if(n<0)
    {
        for(i=n;i>=0;i--)
        {
            cout<<'-'<<i<<' ';
        }
        cout<<endl;
    }


}
