#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,c;
    string a,b,x;
    while(cin>>a>>b)
    {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        x.clear();
        k=0;
        i=0;
        while(i<a.size())
        {
                for(j=0;j<b.size();j++)
                {
                    if(b[j]==a[i])
                    {
                        x.push_back(b[j]);
                        b[j]='0';

                        break;
                    }
                }
            i++;
        }
            cout<<x<<endl;
    }
}
