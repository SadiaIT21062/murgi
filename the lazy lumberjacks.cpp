#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        if(a<b+c&&b<c+a&&c<b+a)
        {
            cout<<"OK"<<endl;
        }
        else
            cout<<"Wrong!!"<<endl;
    }
}
