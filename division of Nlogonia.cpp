#include<iostream>
using namespace std;
int main()
{
    int t,a,b,x,y,i,c,d;
    while(cin>>t)
    {
        if(t==0)
            return 0;
        cin>>a>>b;
        for(i=1;i<=t;i++)
        {
           cin>>c>>d;
           x=c+(-a);
           y=d+(-b);
           if(x>0&&y>0)
            cout<<"NE"<<endl;
           else if(x==0||y==0)
                cout<<"divisa"<<endl;
           else if(x>0&&y<0)
            cout<<"SE"<<endl;
           else if(x<0&&y<0)
            cout<<"SO"<<endl;
           else if(x<0&&y>0)
            cout<<"NO"<<endl;

        }
    }
}
