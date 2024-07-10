#include<iostream>
using namespace std;
int main()
{
    long long int n;
    int rem[100000];
    while(cin>>n)
    {
        if(n<0)
            exit(0);
       else if(n==0)
            cout<<'0';

        long long int i=0,j,c=0;

        while(n!=0)
        {
            rem[i]=n%3;
            if(rem[i]==1)
            {
                c++;
            }
            n=n/3;
            i++;
        }
        for(j=i-1;j>=0;j--)
        {
            cout<<rem[j];
        }
        cout<<endl;
    }
}
