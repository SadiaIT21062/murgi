#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0;
    cin>>n;
    vector<int>v(n);
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(i=0;i<n-1;i++)
    {
        if((v[i]+v[i+1])%2==0)
        {
            i++;
            c+=2;
        }

    }
    cout<<n-c<<endl;
}
