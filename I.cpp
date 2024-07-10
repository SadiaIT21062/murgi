#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,c,rem,sum,m,x,f,k;
    cin>>t;
    while(t--)
    {
        cin>>k>>n;
        if(n==1)
            cout<<k<<' '<<n<<' '<<"NO"<<endl;
        else
        {
            x=n;
            c=0;
            while(c!=1)
            {
                sum=0;
                c=0;
                while(n!=0)
                {

                    rem=n%10;
                    sum=sum+rem*rem;
                    n=n/10;

                }
                m=sum;
                n=sum;
                c=0;
                while(m!=0)
                {


                    m=m/10;
                    c++;
                }

            }
            f=0;
            if(n==1)
            {
                for(i=2; i*i<=x; i++)
                {
                    if(x%i==0)
                    {
                        f++;
                        break;
                    }
                }
                if(f==0)
                    cout<<k<<' '<<x<<' '<<"YES"<<endl;
                else
                    cout<<k<<' '<<x<<' '<<"NO"<<endl;
            }
            else
                cout<<k<<' '<<x<<' '<<"NO"<<endl;

            cout<<n<<endl<<endl;

        }
    }
}

