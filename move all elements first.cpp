#include<iostream>
using namespace std;
int main()
{
    int a[101],b[101],n,i,c=0,j,minimum;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    minimum=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<minimum)
        {
            minimum=a[i];
        }

    }

    for(i=0;i<n;i++)
    {
        if(a[i]==minimum)
            c++;
    }

    j=c;
    for(i=0;i<n;i++)
     {
         if(a[i]!=minimum)
         {
             b[j]=a[i];
              j++;
         }

     }
      for(i=0;i<c;i++)
    {
        b[i]=minimum;
    }
     for(i=0;i<n;i++)
     {
         cout<<b[i]<<' ';
     }
}
