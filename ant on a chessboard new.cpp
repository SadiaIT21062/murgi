#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n,m,t;
    cin>>t;
    for(int x=1;x<=t;x++)
    {
        cin>>n;
        i=1;k=1;m=2,j=1;
        while(k!=n)
        {
            i++;k++;
        if(k==n)
            break;

        while(j!=m&&k!=n)
        {
            j++;k++;
        }
        m++;
        if(k==n)
            break;
        while(i!=1&&k!=n)
        {
            i--;k++;
        }
            if(k==n)
                break;
            j++;
            k++;
            if(k==n)
                break;
            while(i!=m&&k!=n)
            {
                i++;
                k++;
            }
            m++;
            if(k==n)
                break;
            while(j!=1&&k!=n)
            {
                j--;
                k++;
            }
            if(k==n)
                break;
        }

 cout<<"Case "<<x<<": "<<j<<" "<<i<<endl;
    }

 }

