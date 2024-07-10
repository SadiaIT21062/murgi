#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    int i,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    cout<<s.size()<<endl;

}
