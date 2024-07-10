#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,sum,i,j,m;
    string s;
    cin>>t;
    while(t--)
    {
        sum=0;
       cin>>s;
       for(i=0;i<s.size();i++)
       {
           if(s[i]=='X')
            sum=sum+0;
           else if(s[i]=='O')
           {
               m=0;
               j=i;
               while(s[j]=='O')
               {
                   m++;
                   //cout<<m<<endl;
                   j--;
               }
               sum=sum+m;
           }
       }
       cout<<sum<<endl;
    }
}
