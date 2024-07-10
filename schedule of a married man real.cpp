#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,h2,h3,h4,m1,m2,m3,m4,t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {

        scanf("%d:%d %d:%d",&h1,&m1,&h2,&m2);
        h1=h1*60+m1;
        h2=h2*60+m2;
        scanf("%d:%d %d:%d",&h3,&m3,&h4,&m4);
        h3=h3*60+m3;
        h4=h4*60+m4;
        cout<<"Case "<<i<<": ";
        if(h4<h1||h3>h2)
            cout<<"Hits meeting"<<endl;
        else
            cout<<"Mrs meeting"<<endl;
    }
}

