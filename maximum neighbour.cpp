#include<iostream>
using namespace std;
int main()
{
    int n,a[101],i,c=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n-1;i++)
    {
        if(a[i]>a[i-1]&&a[i]>a[i+1])
            c++;
    }
    cout<<c<<endl;
}
