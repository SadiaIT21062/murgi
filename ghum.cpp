#include<iostream>
using namespace std;
int main()
{
    int p,i,d,t,x,y,m,gcd,j,k,rem;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>p>>d;
        m=p-d;
        for(j=1; j<=m; j++)
        {
            for(k=1; j<=m; j++)
            {
                x=j;
                y=j;
                if(x*y==m)
                {
                    while(y!=0)
                    {
                        rem=x%y;
                        x=y;
                        y=rem;

                    }
                    gcd=x;
                    if(gcd==d)
                    {
                        cout<<"Yes"<<endl;
                        exit(0);
                    }
                    else
                    {
                        cout<<"No"<<endl;
                        exit(0);
                    }

                }
            }
        }
        cout<<"No"<<endl;

    }


}