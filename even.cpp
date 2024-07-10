#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,p;
    cin>>n;
    if(n==0)
        return 0;
     for(i=1;i<=n;i++)
        {
            cin>>p;

            if(p%2==1)
               {
                  printf("%d ",p);
               }
        }


        return 0;
}




