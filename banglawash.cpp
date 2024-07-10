#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,b,w,a,x,p=1,ti;
    string s;
    cin>>t;
    while(t--)
    {
        a=0;b=0;w=0,ti=0;
        cin>>x;
        cin>>s;
        for(i=0;i<x;i++)
        {
            if(s[i]=='B')
                b++;
            else if(s[i]=='W')
                w++;
            else if(s[i]=='A')
                a++;
            else
                ti++;
        }
        cout << "Case " << p << ": ";

        if (a==x)
            cout << "ABANDONED"<<endl;
        else if (b==w)
            cout << "DRAW " << b << ' ' << ti<<endl;
        else if (w+a == x&&w!=0)
            cout << "WHITEWASH"<<endl;
        else if (b+a == x&&b!=0)
            cout << "BANGLAWASH"<<endl;
        else if (b>w)
            cout << "BANGLADESH " << b << " - " << w<<endl;
        else
            cout << "WWW " << w<< " - " << b<<endl;
            p++;
    }

}
