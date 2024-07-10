#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n;
    while(cin>>n)
    {
        k=1,i=1,j=1;
        while(k!=n)
        {
            j++;k++;
            if(k==n)
                break;
            while(k!=n&&j!=1)
            {
                j--,i++,k++;

            }
            if(k==n)
                break;
            i++;k++;
            if(k==n)
                break;
            while(k!=n&&i!=1)
            {
                i--,j++,k++;
            }

        }cout<<"TERM "<<n<<" IS "<<i<<"/"<<j<<endl;
    }
}
