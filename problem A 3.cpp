#include<iostream>
using namespace std;
int main()
{
    int n,a[101],i,maximum,minimum,j,total;

    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    maximum=a[0];
    minimum=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>maximum)
            maximum=a[i];
        else if(a[i]<minimum)
            minimum=a[i];
    }
    total=minimum+maximum;
    cout<<total<<endl;

}
