#include<iostream>
using namespace std;
int main()
{
    int n,i,a[101],minimum,maximum;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    minimum=a[0];
    maximum=a[0];
    for(i=0;i<n;i++)
    {
       if(a[i]<minimum)
            minimum=a[i];
       else if(a[i]>maximum)
           maximum=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==maximum)
            a[i]=minimum;
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<' ';
}
