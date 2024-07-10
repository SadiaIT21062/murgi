#include<iostream>
using namespace std;
int main()
{
    int n,a[1000],x,i,f,j,y,sum,k,c,d,m,l;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    cin>>x>>y;
    c=0;
    d=0;
    for(i=1; i<n; i++)
    {
        if(x<=a[i+1]&&x>=a[i])
        {
            c=1;
            j=i;
        }

    }
    if(c==1)
    {
        for(i=j; i<n; i++)
        {
                if(y<=a[i+1]&&y>=a[i])
                {
                    d=1;
                    break;
                }

        }
    }
    if(c==1&&d==1)
    {
        k=1;
        sum=0;
        for(i=1; i<=n; i++)
        {
            if(a[i]==y)
            {
                f=1;

            }

        }
        if(f==1)
        {
            while(a[k]!=y)
            {
                sum=sum+abs(a[k+1]-a[k]);
                k++;
            }
        }
        else
        {
            for(m=j;m<n;m++)
            {
               for(l=a[m];l<y;l++)
               {
                   sum=sum+1;
               }
               break;
            }
        }

        cout<<"YES"<<endl<<sum;

    }
    else
        cout<<"NO"<<endl;
}
