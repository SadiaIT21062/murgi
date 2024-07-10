#include<iostream>
using namespace std;
int main()
{
 int a[10],n,b[10],i,j,c;
  cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];

    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           if(a[i]==b[j])
                b[j]=0;

        }
    }

   for(j=0;j<n;j++)
    {
       if(b[j]!=0)
        c++;
    }
    cout<<c<<endl;

}
