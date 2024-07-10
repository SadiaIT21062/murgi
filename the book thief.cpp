#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum,p,x,s,i;
    while(cin>>sum)
    {
        if(sum==0)
            exit(0);
        else if(sum==1)
            cout<<2<<' '<<2<<endl;
        else{
        i=sqrt(sum);int j=i-1;s=0,x=0;
        while(s<=sum)
        {
            j=j+1;
           s=(i*(i+1))/2;
            i++;
        }

        cout<<s-sum<<' '<<j<<endl;
        }
    }
}

