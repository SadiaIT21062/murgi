#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    set<int>s;
    set<int>::iterator it;
    s.insert(10);
    s.insert(3);
    s.insert(5);
    s.insert(10);

    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
