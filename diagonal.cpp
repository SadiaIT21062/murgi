#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,p=0;
    double n;
    while(cin>>n)
    {
        if(n==0)
            exit(0);
            p++;
        n=(3+sqrt(9+8*n))/2;
        cout<<"Case "<<p<<": "<<ceil(n)<<endl;
    }

}
