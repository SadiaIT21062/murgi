#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,sum,n,x,j;
    cin>>t;//4
    while(t--)
    {
        cin>>n;//20
        sum=0;
        i=9;
        j=1;
        vector<int>v;
        while(sum!=n)//17!=20
        {
            x=n-sum;//20-17=3
            if(x>=10&&j==1)
            {
                v.push_back(i);//98
                sum=sum+i;//17
                j++;
            }
             if(x>=10&&v.back()!=i&&j!=1)
            {
                v.push_back(i);//98
                sum=sum+i;//17
            }
            else if(x<10&&v.back()!=x)
            {
                v.push_back(x);
                sum=sum+x;
            }
          i--;//7
        }
        //reverse(v.begin(),v.end());
        for(i=v.size()-1;i>=0;i--)
            cout<<v[i];
        cout<<endl;

    }
}
