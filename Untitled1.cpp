#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ll long long int
#define pb push_back
#define f first
#define sec second
#define all(v) v.begin(), v.end()
const int N = 2e7 + 10;
void solve()
{
    int n;
    cin>>n;
    int i,j;
    int x[n+10];
    string s;
    for(i=0;i<n;i++)
    {
        x[i]=0;
    }
    for(i=0;i<n;i++)
    {

        cin>>s;
        for(j=0;j<s.size();j++)
        {
            if(s[j]=='1')
              x[i]++;
        }

    }
    for(i=0;i<n-1;i++)
    {
           if((x[i]==x[i+1])&&(x[i]!=0)&&(x[i+1]!=0))
           {
            cout<<"Square"<<endl;
            break;
           }

           else if((x[i]!=x[i+1])&&(x[i]!=0)&&(x[i+1]!=0))
           {
            cout<<"Triangle"<<endl;
            break;
           }

    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

