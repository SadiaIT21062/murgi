#include<iostream>
using namespace std;
int n,t,i,x,k,j,a[5000];
int main()
{

    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        if(n==0)
            return 0;
        for(k=0;k<=9;k++)
            a[k]=0;
        while(n!=0)
        {
            j=n;
           while(j!=0)
           {
               x=j%10;
               j=j/10;
               a[x]++;
            }
           n--;
        }
        for(k=0;k<=9;k++)
        {
            if(k)
            cout<<" ";
            cout<<a[k];
        }
        cout<<endl;
    }
}
