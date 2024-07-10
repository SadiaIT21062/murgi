#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int n,t,i,sum=0;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>s;
        if(s=="donate")
        {
            cin>>n;
            sum=sum+n;
        }
        else if(s=="report")
        {

            cout<<sum<<endl;
        }
    }
}
