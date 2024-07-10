#include<iostream>
using namespace std;
void palindrom(int n)
{
    if(n<0)
    {
        cout<<"false"<<endl;
        exit(0);
    }

    int p=n;
    int sum=0;
    while(n!=0)
    {
       int rem=n%10;
       sum=sum*10+rem;
       n=n/10;
    }

    if(sum==p)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
}
int main()
{
    int n;
    cin>>n;
    palindrom(n);

}
