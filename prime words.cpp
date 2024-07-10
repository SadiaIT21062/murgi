#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum,i,c;
    string s;
    while(cin>>s)
    {
        sum=0;
        c=0;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]>='a'&&s[i]<='z')
                sum=sum+s[i]-96;
            else if(s[i]>='A'&&s[i]<='Z')
                sum=sum+s[i]-64+26;
        }
        for(i=2;i<=sqrt(sum);i++)
        {
            if(sum%i==0)
                {
                    cout<<"It is not a prime word."<<endl;
                    c=-1;
                    break;
                }
        }
        if(c==0)
            cout<<"It is a prime word."<<endl;
    }

}
