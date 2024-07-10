#include<iostream>
using namespace std;
int main()
{
    int n,a[101],i,c=0,maximum;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    maximum=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>maximum)
            maximum=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==maximum)
            c++;
    }
    cout<<c<<endl;
}
