#include<iostream>
using namespace std;
int main()
{
    int t,k,i,j,c,n;
    cin>>t;
    for(k=1; k<=t; k++)
    {
        cin>>n;
        c=0,i=1;
        while(c!=n)
        {
            j=0;
            while(j!=i&&c!=n)
            {
                c++;
                j++;
            }
            if(c==n||n-c<i+1)
                break;
            i++;
        }
    cout<<i<<endl;
    }

}
