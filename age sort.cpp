#include<iostream>
using namespace std;
int main()
{
    int a[101],i,j,k,n,temp;
    while(cin>>n)
    {
        if(n==0)
            exit(0);
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(j=0;j<n-1;j++)
        {
            for(k=0;k<n-1-j;k++)
            {
                if(a[k+1]<a[k])
                {
                    temp=a[k];
                    a[k]=a[k+1];
                    a[k+1]=temp;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

}
