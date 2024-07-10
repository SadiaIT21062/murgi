#include<iostream>
using namespace std;
int main()
{
    string s;
    int t,i,j,m,a,r,g,I,T;
    cin>>t;
    for(j=1;j<=t;j++)
    {
        cin>>s;
        a=0;m=0;r=0;g=0;I=0;T=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='A')
                a++;
            else if(s[i]=='M')
                m++;
            else if(s[i]=='R')
                r++;
            else if(s[i]=='G')
                g++;
            else if(s[i]=='I')
                I++;
               else if(s[i]=='T')
                T++;
        }
        m=m/1;
        a=a/3;
        r=r/2;
        g=g/1;
        I=I/1;
        T=T/1;
       int min1=min(m,a);
       int min2=min(min1,r);
       int min3=min(min2,g);
       int min4=min(min3,I);
       int minimum=min(min4,T);
        cout<<minimum<<endl;
    }
}
