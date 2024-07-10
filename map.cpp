#include<bits/stdc++.h>
//#include<string.h>
//#include<map>
using namespace std;
int main()
{
    map<string,int> m;//index,value...
    m.insert({"sadia",62});
    m.insert({"meem",59});
    m["shirsha"]=01;
    m["sadia"]=62;//data doesnt repeat...
    if(m.empty())
        cout<<"empty"<<endl<<endl;
    else
        cout<<"not empty"<<endl<<endl;
    /*m.clear();
    if(m.empty())
        cout<<"empty"<<endl;
    else
        cout<<"not empty"<<endl;*/
   for(auto it: m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<endl<<m.size()<<endl<<m.max_size()<<endl;
    cout<<m["sadia"]<<endl;
    cout<<m.at("meem")<<endl;

}


