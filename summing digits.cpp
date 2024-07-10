#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        if(n%10==n)
        {
            cout<<n<<endl;
            continue;
        }
        while(n%10!=n)
        {
            sum=0;
            while(n!=0)
            {
                sum=sum+n%10;
                n=n/10;
            }
            n=sum;
        }
        cout<<sum<<endl;
    }
}
