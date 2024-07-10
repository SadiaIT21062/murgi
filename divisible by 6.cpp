#include<iostream>
using namespace std;
int main()
{
    long long int sum=0;
    int n,p[100],i,c=0;

    cin>>n;
    if(n==0)
        return 0;
    for(i=1;i<=n;i++)
    {
        cin>>p[i];
        if(abs(p[i])<=10000)
        {
            if(p[i]%6==0&&p[i]>=0)
           {
            sum=sum+p[i];
            c++;
           }

        }

    }

    cout<<c<<' '<<sum<<endl;
    return 0;
}
