#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,4,2,6,7};

    for(int i=0;i<=4;i++)
    {
       // cout<<a<<endl;//first index address.
          cout<<(a+i)<<endl;//ads of index print
          cout<<*(a+i)<<endl;//element print
    }
}
