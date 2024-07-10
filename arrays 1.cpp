#include<iostream>
using namespace std;
int main()
{
    int a[100],n,i,j,c=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(j=0; j<n; j++)
    {
        for(i=0; i<n; i++)
        {
            if(a[i]!=0&&a[i]>0)
            {
                a[i]=a[i]-a[j];
            }

            else if(a[i]!=0&&a[i]<0)
            {
                a[i]=a[i]+a[j];
            }

        }
        c++;

    }
    cout<<c<<endl;

}
