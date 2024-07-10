#include<iostream>
using namespace std;
int a[101],n,i,j,minimum,c=0;
int main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    minimum=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<minimum)
            minimum=a[i];
    }
    cout<<minimum<<endl;
    for(i=0;i<n;i++)
    {
        if(a[i]==minimum)
            c++;
    }
    cout<<c<<endl;
    for(i=0;i<n;i++)
    {
        a[i+2]=a[i];
        cout<<a[i+1]<<' ';

    }

}
