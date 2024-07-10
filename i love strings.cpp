#include<iostream>
using namespace std;
int main()
{
    int t,n,i,j,k,l;
    string a,s;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        cin>>n;
        for(j=1;j<=n;j++)
        {
            cin>>s;

            for(k=0;k<a.size();k++)
            {
                if(s[0]==a[k])
                {
                    l=k;
                    break;
                }
            }
            int c=0;
            for(k=1;k<s.size();k++)
            {
                l++;
                if(s[k]!=a[l])
                {
                    c++;
                    break;
                }
            }
            if(c==0)
                cout<<"y"<<endl;
            else
                cout<<"n"<<endl;

        }
    }
}
