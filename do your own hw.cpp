#include<iostream>
using namespace std;
int main()
{
    int c,d,i,t,a,n,k,j;
    string str1,str;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        c=0;
        cin>>k;
        cin>>str;
        cin>>d;
        for(j=1; j<=k; j++)
        {
            cin>>str1>>a;
            if(str1==str)
            {
                if(d-a>=0)
                    {cout<<"Case "<<i<<": Yesss"<<endl;break;}
                else if((d+5)-a>=0)
                    {cout<<"Case "<<i<<": Late"<<endl;break;}
                else
                    {cout<<"Case "<<i<<": Do your own homework!"<<endl;break;}
            }
            else
                c++;

        }
        if(c==k)
            cout<<"Case "<<i<<": Do your own homework!"<<endl;
    }
}
