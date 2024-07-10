#include<iostream>
using namespace std;
int cube(int n)
{
   int x=n*n*n;
   return x;
}
int main()
{
    int n;
    cin>>n;
    cout<<cube(n);
}
