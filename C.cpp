#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,c,k;
    cin>>s;
     vector<int>a(26,0);
    for(i=0;i<s.size();i++)
    {
        a[s[i]-97]++;
    }
    c=0;k=0;
    for(i=0;i<26;i++)
    {
       if(a[i]%2==0)
            k++;

       if(a[i]%2!=0)
       {
           c=c+1;
       }

    }
    if(k!=26)
    cout<<c-1<<endl;
    if(k==26)
        cout<<0<<endl;
    a.clear();

}
