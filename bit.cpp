#include<iostream>
using namespace std;
int main()
{
    int n,X=0,i,j;
    string s;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>s;

            for(j=0;j<s.length();j++)
            {
                if(s[j]=='+')
                {
                    X++;
                    break;
                }
                if(s[j]=='-')
                {
                    X--;
                    break;
                }
            }
    }
    cout<<X<<endl;

}
