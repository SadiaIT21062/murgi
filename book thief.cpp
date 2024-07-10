#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,sum,p,c,x;
    while(cin>>s)
    {
        if(s==0)
            exit(0);
        sum=0;c=0;p=1;
        while(sum<=s)
        {
            sum=sum+p;
            p++;
            c++;
        }
        x=sum-s;
        cout<<x<<" "<<c<<endl;
    }
}
