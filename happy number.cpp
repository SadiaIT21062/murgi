#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,c,rem,sum,m,x;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        x=n;  //7
        c=0;
        while(c!=1)
        {
            sum=0;c=0;
            while(n!=0)
            {

                rem=n%10; //3 //1   //0  //1
                sum=sum+rem*rem;//0+9+1=10   //0   //sum=1
                n=n/10; //1    0    //1 //0

            }
            m=sum;//10  //1
            n=sum;//10  //1
            c=0;
            while(m!=0)
            {


                m=m/10; //1//0 //0
                c++;//1+1   //1
            }

        }
        if(n==1)
            cout<<"Case #"<<i<<": "<<x<<" is a Happy number."<<endl;
        else
            cout<<"Case #"<<i<<": "<<x<<" is an Unhappy number."<<endl;
    }
}
