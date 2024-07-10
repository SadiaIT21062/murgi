#include<iostream>
using namespace std;
int main()
{
    string a,b;int i,t,s,k[5],m[5],sum,x,j,l,y,o;
    cin>>t;
    for(i=1;i<=t;i++)
    {
       cin>>s;
       cin>>a>>b;
       l=0;
       for(j=0;j<s;j++)
       {
           if(a[j]=='1')
           {
               k[l]=j+1;
               l++;
           }
       }
       o=0;
        for(j=0;j<s;j++)
       {
           if(b[j]=='1')
           {
               m[o]=j+1;
               o++;
           }
       }
        sum=0;
       for(x=0;x<l;x++)
       {
           for(y=0;y<o;y++)
           {
               sum=sum+abs(k[x]-m[y]);
           }
       }
       cout<<sum<<endl;

    }

}
