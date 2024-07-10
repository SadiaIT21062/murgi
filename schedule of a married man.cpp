#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,h2,h3,h4,m1,m2,m3,m4,t,i;
   // char  c1,c2,c3,c4;
    cin>>t;
    for(i=1;i<=t;i++)
    {

        scanf("%d:%d %d:%d",&h1,&m1,&h2,&m2);
        scanf("%d:%d %d:%d",&h3,&m3,&h4,&m4);
        cout<<"Case "<<i<<": ";
        if(h4<h1||h3>h2)
            cout<<"Hits meeting"<<endl;
        else if(h1==h4)
        {
            if(m1>m4)
                cout<<"Hits meeting"<<endl;
                else
                    cout<<"Mrs meeting"<<endl;
        }
        else if(h2==h3)
        {
            if(m3>m2)
                cout<<"Hits meeting"<<endl;
                else
                cout<<"Mrs meeting"<<endl;
        }
        else
            cout<<"Mrs meeting"<<endl;
    }
}
