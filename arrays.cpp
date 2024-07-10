#include<iostream>
using namespace std;
int main()
{
    int a,i,j,b,m,n,c[100],d[100];
    cin>>a>>b;
    cin>>m>>n;
    for(i=1;i<=a;i++)
    {
        cin>>c[i];
    }
    for(j=1;j<=b;j++)
    {
        cin>>d[j];
    }
    if(c[m]<d[n])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
