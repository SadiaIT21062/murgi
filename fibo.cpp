#include<iostream>
using namespace std;
int fibo(int i)
{
    if(i==0)
        return i;
    else if(i==1)
        return i;
    else
        return (i-1)+(i-2);
}
int main()
{
    int i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<fibo(i)<<endl;
    }
}
