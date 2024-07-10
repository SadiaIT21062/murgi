#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int n,c,i,A=0,B=0,C=0,D=0;
    cin>>n;
    string s,col;
    cin>>s;
    c=2*n;
    for(i=0; i<c; i++)
    {
        if(s[i]=='A')
            A++;
        else if(s[i]=='B')
            B++;
        else if(s[i]=='C')
            C++;
        else if(s[i]=='D')
            D++;
    }
    for(i=0; i<c; i++)
    {

            if(s[i]!='A'&&col[i-1]!='A'&&A!=n)
            {
                col[i]='A';
                A++;
            }
            else if(s[i]!='B'&&col[i-1]!='B'&&B!=n)
            {
                col[i]='B';
                B++;
            }
            else if(s[i]!='C'&&col[i-1]!='C'&&C!=n)
            {
                col[i]='C';
                C++;
            }
            else if(s[i]!='D'&&col[i-1]!='D'&&D!=n)
            {
                col[i]='D';
                D++;
            }
    }
    for(i=0;i<c;i++)
        cout<<col[i];

}

