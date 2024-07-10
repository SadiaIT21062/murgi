#include<iostream>
using namespace std;
int main()
{
    int year,c;
    while(cin>>year)
    {
        c=0;
        if(year<2000)
            return 0;
        if(year%400==0||(year%100!=0&&year%4==0))
           {
               cout<<"This is leap year."<<endl;
               c=1;
           }
        if(year%15==0)
        {
            cout<<"This is huluculu festival year."<<endl;
        }
        if(year%55==0&&c==1)
        {
           cout<<"This is bulukulu festival year."<<endl;
        }

        if(c!=1&&(year%55)!=0&&(year%15)!=0)
        {
            cout<<"This is an ordinary year."<<endl;
        }
        cout<<endl;
    }
}
