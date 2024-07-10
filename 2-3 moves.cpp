#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
            cout<<2<<endl;
        else if(n%3==0)
            cout<<n/3<<endl;
        else if(n%3!=0)
            cout<<n/3 +1<<endl;
    }
}
