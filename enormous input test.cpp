#include<iostream>
using namespace std;
int main()
{
    int i,c=0;
    long int n,k,t;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>t;
        if(t%k==0)
        {
            c++;
        }
    }
    cout<<c<<endl;
}
