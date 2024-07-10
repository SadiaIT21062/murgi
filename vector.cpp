#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vect={1,2,2,3};
    int len=vect.size();
    // vector<int>vect2;
    //vect2=vect;
    //vect.push_back(30);
    //vect.push_back(35);
    //vect.push_back(45);
     vect.insert(vect.begin()+2,7);
     for(int x:vect)
        cout<<x<<' '<<endl;
    /*for(int i=0;i<len;i++)
        cout<<vect[i]<<' ';*/

}
