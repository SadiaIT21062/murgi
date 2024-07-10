#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s)
{
    bool f=0,l=s.size()-1;

    while(f<=l)
    {
        if(s[f]!=s[l])
        return 0;

        l--;
        f++;
    }
    return 1;
}
int main()
{
    string s;

    cin>>s;
     bool f=palindrome(s);
    if(f==1)
        cout<<"palindrome"<<endl;
        else
            cout<<"not palindrome"<<endl;
}
