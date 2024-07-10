#include<iostream>
using namespace std;
int main()
{
    int n,i,j,a[10001],temp;
    cin>>n;

    for(i=1;i<=n*n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n*n;i++)
    {
        for(j=i+1;j<=n*n;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=1;i<=n*n;i++)
    {
        cout<<a[i]<<' ';
    }
    cout<<endl;
}
