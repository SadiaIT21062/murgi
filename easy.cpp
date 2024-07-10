#include<iostream>
using namespace std;
int main()
{
    int n,i;
    double p,sum=0;

    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>p;
        sum=sum+p;
    }
    cout<<sum<<endl;

}
