#include<iostream>
using namespace std;
int main()
{
    int n,m,a[100000],i,j,c=0;
    cin>>n>>m;

    for(i=1;i<=m;i++)
    {
        cin>>a[i];
        if(i==1)
        {
            for(j=1;j<a[i];j++)
               c++;
        }
        if(i!=1&&(a[i]>a[i-1]))
        {
            for(j=a[i-1];j<a[i];j++)
                c++;
        }
        if(i!=1&&(a[i]<a[i-1]))
        {
            for(j=a[i-1];j<n;j++)
                c++;
            for(j=1;j<=a[i];j++)
                c++;
        }


    }
    cout<<c<<endl;
}
