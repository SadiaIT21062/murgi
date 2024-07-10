#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string s;
    cin>>s;
    vector<char>v;
    for(i=0;i<s.size();i+=2)
    {
        v.push_back(s[i]);
    }
    sort(v.begin(),v.end());
    for(i=0;i<v.size();i++)
    {
        if(i<v.size()-1)
        cout<<v[i]<<'+';
        else
            cout<<v[i];
    }
    cout<<endl;
}
