#include<iostream>
using namespace std;
int main()
{
    int n,a[100],i,j,temp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }
    for(j=0;j<n;j++)
        cout<<a[j]<<' ';
}
