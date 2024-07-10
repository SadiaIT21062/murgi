#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,t,p,q;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x<y)
            cout<<"impossible"<<endl;
        else
        {
            p=(x+y)/2;
            q=(x-y)/2;
            if(p+q==x&&(p-q)==y)
              cout<<p<<" "<<q<<endl;
              else
                cout<<"impossible"<<endl;
        }
    }
}
