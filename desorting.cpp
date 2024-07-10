#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,c,k,n,j,mn;
    cin>>t;
    while(t--)
    {
        cin>>n;//2
        c=0;
        k=1;
        vector<int>a(n+1);
        vector<int>dif(n);
        vector<int>dif1(n);
        for(i=1; i<=n; i++)//1 1
            cin>>a[i];
        for(i=1; i<n; i++)
        {
            if(a[i+1]>=a[i])
                k++;//2
            dif[i]=a[i+1]-a[i];
            dif1[i]=dif[i];//0
        }//cout<<k<<endl;
        if(k!=n)
        {

            cout<<0<<endl;
        }

        else
        {
           // c=0;
            sort(dif1.begin(),dif1.end());
            mn=dif1[1];
           // cout<<mn<<endl;
           for(i=1; i<=dif.size(); i++)
                {
                    if(dif[i]==mn)
                        j=i;
                }

            while(k==n)
            {
                    k=1;
                    a[j]++;
                    a[j+1]--;
                    c++;
                for(i=1; i<n; i++)
                {
                    if(a[i+1]>=a[i])
                        k++;

                }

                if(k!=n)
                   {
                       cout<<c<<endl;
                   }
            }
            //cout<<c<<endl;
        }
        a.clear();
        dif.clear();
        dif1.clear();
    }
}
