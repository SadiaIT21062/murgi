#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,t,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=0;
        vector<int>a(n);
        for(i=0;i<n;i++)
        {
           cin>>a[i];
        }
        i=0;j=n-1;
        while(i<j)
        {
            if(a[i]==1&&a[j]==1)
            {
                j--;
            }
            else if(a[i]==0&&a[j]==1)
            {
                i++;
            }
             else if(a[i]==0&&a[j]==0)
            {
                i++;
            }
            else if(a[i]==1&&a[j]==0)
            {
                c++;
                i++;
                j--;
            }
        }
        cout<<c<<endl;
    }
}
