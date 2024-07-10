#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double i,n,c=0,p,sum=0,aver;
    cin>>n;
    if(n==0)
        return 0;
    cout<<fixed;
    cout<<setprecision(2);
    for(i=1; i<=n; i++)
    {
        cin>>p;

          if(p>=0)
            {
                c++;
                sum=sum+p;
            }

    }
    aver=sum/c;
    if(c==0)
        cout<<"Not Found"<<endl;
    else

        cout<<aver<<endl;

}
