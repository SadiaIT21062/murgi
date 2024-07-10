#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,sbstr;
    int a=0;
    getline(cin,str);
    for(int i=0;i<str.size();++i)
    {   a=0;
        if(str[i]!=str[i-1])
        {
            for(int j=i-1;j>=0;--j)
            {
                if(str[i]==str[j])
                {
                    a=1;
                    cout<<"YES"<<endl;
                    break;
                }
            }
        }

    }
    if(a==0)
        cout<<"No"<<endl;
 return 0;
}
