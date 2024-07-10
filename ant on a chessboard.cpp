#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,c,r,p;
    while(cin>>n)  //8
    {
        if(n!=0)
        {
            i=1;c=1,r=1,p=1;
            while(p!=n)
            {
                   r=r+1;
                   p=p+1;    /*if(p==n)
                                break;

                       for(k=1;k<=i;k++)
                               {
                                   p++;
                                   if(p==n)
                                   {

                                      break;
                                   }
                               }*/

                   c=c+i;
                   p=p+i;
                   r=r-i;
                   p=p+i;
                   i++;

                   c=c+1;
                   p=p+1;
                   r=r+i;
                   p=p+i;
                   c=c-i;
                   p=p+i;
                   i++;
            }
            cout<<c<<" "<<r<<endl;
        }


    }
}
