#include<bits/stdc++.h>
using namespace std;
void f(vector<int>a)
{
    for(auto &x:a)
        x+=5;
}
int main()
{
    vector<int>v(10);
    f(v);
    for(auto x:v)
        cout<<x<<" ";
}
