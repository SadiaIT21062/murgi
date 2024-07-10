#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n=8,i;
    char a;
    cin>>t;
    while(t--)
    {
        for(i=0;i<n*n;i++)
        {
            cin>>a;
            if(a!='.')
                cout<<a;

        } cout<<endl;
    }
}
