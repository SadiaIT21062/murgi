#include<iostream>
using namespace std;
int main()
{
    int a[100000],n,i,j,k,maximum;
    cin>>n;
    if(n==0)
        return 0;

    for(i=0;i<=n;i++)
    {
        if(i==0)
            a[i]=i;
        else if(i==1)
            a[i]=i;
        if(i%2!=0)
        {
            a[i]=a[(i-1)/2]+a[((i-1)/2)+1];

        }
            a[2*i]=a[i];
    }
        maximum=a[0];
        for(i=0;i<=n;i++)
        {
            if(a[i]>maximum)
                maximum=a[i];
        }
        cout<<maximum<<endl;
}
