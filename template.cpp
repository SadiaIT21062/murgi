#include<iostream>
using namespace std;
template<class T>
    T great(T x,T y)
    {
        return x>y?x:y;
    }
int main()
{
    cout<<great(20,30)<<endl;
    cout<<great('A','F')<<endl;
    cout<<great(100.25,100.15)<<endl;
}
