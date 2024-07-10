#include<bits/stdc++.h>
#include<stack>
#include<string>
using namespace std;
int main()
{
    int t,ans,i,c;
    string s;
    cin>>t;
    getchar();

    while(t--)
    {
        //c=0;
        stack<char>a;
        //ans=1;
        getline(cin,s);
        for(i=0;i<s.size();i++)
        {
            //c++;
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
                a.push(s[i]);
            else if(s[i]==')')
            {
                if(!a.empty()&&a.top()=='(')
                    a.pop();
                else if(a.empty())
                    a.push(')');
                else
                {
                    break;
                }
            }
            else if(s[i]=='}')
            {
                if(!a.empty()&&a.top()=='{')
                    a.pop();
                else if(a.empty())
                    a.push('}');
                else
                {
                    break;
                }
            }
            else if(s[i]==']')
            {
                if(!a.empty()&&a.top()=='[')
                    a.pop();
                else if(a.empty())
                    a.push(']');
                else
                {
                    break;
                }
            }

        }
        if(a.empty())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
