#include<iostream>
using namespace std;
int main()
{
    int n,i,sum;
    while(cin>>n)
    {
        if(n==0)
            exit(0);
            i=1;
            sum=0;
        while(i!=n+1)
        {
            sum=sum+i*i;
            i++;
        }
        cout<<sum<<endl;
    }
}
