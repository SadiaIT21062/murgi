#include<bits/stdc++.h>
using namespace std;
int t,i,j,n,c,w,l=1,r=1000000000,mid,x,p,area;
int main()
{
   cin>>t;
   while(t--)
   {
       cin>>n>>c;
       area=0;
       vector<int>v(n);
       for(i=0;i<n;i++)
          cin>>v[i];
         while(l<=r)
         {
            mid=(l+r)/2;
            for(i=0;i<n;i++)
            {
                x=2*mid;
                p=v[i]+x;
                area=area+p*p;
            }
            if(area==c)
              cout<<mid<<endl;
            else if(area<c)
            l=mid+1;
            else if(area>c)
            r=mid-1;

         }
   }
}
