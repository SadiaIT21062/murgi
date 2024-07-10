#include<iostream>
using namespace std;
int main()
{
    int n,k,i,sum=1;
    cin>>k>>n;
    for(i=n;i>n-2;i--)
        sum=sum*i;
        cout<<sum<<endl;
}
