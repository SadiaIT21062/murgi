#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,i,c;
    while(cin>>a>>b)
    {
        c=0;
        if(a==0&&b==0)
            exit(0);
        for(i=a; i<=b; i++)
        {
           if(floor(sqrt(i))*floor(sqrt(i))==i)
              c++;
        }
        cout<<c<<endl;
    }
}
