#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int l,i,sum,k;
    string s;
    while(cin>>s)
    {
        if(s=="0")
          return 0;
        l=s.size();
        sum=0;
        k=0;
        for(i=0;i<l;i++)
        {
            sum=sum+(s[i]-'0')*(pow(2,l-k)-1);
            k++;
        }
        cout<<sum<<endl;
    }
}
