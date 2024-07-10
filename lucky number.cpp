#include<iostream>
using namespace std;
int main()
{
    long long int n,i,c=0;
    while(n!=0)
    {
        n=n%10;
        if(n==7&&n==4)
            c++;
        n=n/10;
    }

}
