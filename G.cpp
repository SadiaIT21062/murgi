#include<iostream>
using namespace std;
int main()
{
    int t,n,a[101],i,j,minimum,c;

    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        minimum=a[0];
        for(j=0;j<n;j++)
        {
            if(a[j]<minimum)
                minimum=a[j];
        }
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[j]>minimum)
                c++;
        }
        cout<<c<<endl;
    }
}
