#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>a;
    for(int i=0;i<10;i++)
    {
        int x;
        cin>>x;
        a.insert(x);
    }
    cout<<a.size()<<endl;
    return 0;

}
