#include<iostream>
using namespace std;
int main()
{
    long long int a,b,x;
    char s;
    while(cin>>a>>s>>b)
    {
        if(a<0&&b<0)
            exit(0);

        if(s=='/')
            x=a/b;
        else if(s=='%')
            x=a%b;
        cout<<x<<endl;

    }
}
