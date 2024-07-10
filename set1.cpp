#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    set<string>s;
    set<string>::iterator it;
    s.insert("Sadia");
    s.insert("Chowdhury");
    s.insert("Mazharul");
    s.insert("Islam");
    pair<set<string>::iterator,bool>p;
    p=s.insert("Mazharul");
    //p=s.insert("sona bow");
    if(p.second==false)
        cout<<"Can't inserted"<<endl;
    else
        cout<<"Inserted"<<endl;

    /*for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";}*/
    cout<<endl;
}
