#include<bits/stdc++.h>
using namespace std;
int i,n,j,nprime,mark[200],k,prime[200];
void sieve(int n)
{
    int limit=sqrt(n*1.0)+2;
    mark[1]=1;
    //cutting even numbers from 4 to n..
    //2 is even bt prime also...
    for(i=4; i<=n; i=i+2)
    {
        mark[i]=1;
    }
    prime[nprime++]=2;// 2 is the 1st prime..so prime[0]=2 rakhi...index er man 1 barai..
    for(i=3; i<=n; i=i+2)//3 theke odd gulo check kori...even to katai gese..
    {
        if(mark[i]!=1)//mark[]=1 hole prime na..tai 1 na hole oita prime nmbr hisebe count kori..prime number er array te rakhi...
        {             //prime number diye check kre katlei hye jabe...
            prime[nprime++]=i;
            if(i<=limit)//shb prime number diye na check kore...root (n) prjnto prime nmbr diye check kore kore katlei shb kata hoye jabe.
            {
                for(j=i*i; j<=n; j=j+2*i) //j=i*i cz 5 diye cut korte gele 5 10 15 20 already cutted..
                                          //j=j+2*i cz 25 30 35 40..ekhane 30 & 40 check korar drkr nei..cz even... tahole 25 35 45 difference 10..10=2*i
                {                         //i=3 hole... 3 6 9 12 15 18 21..6 check korar drkr nai..krn i*i theke check krbo..abr 6 12 18 check korar drkr nai...they are even..
                                          //so..check krte hbe 9 15 21 diff=6=2*i(i=3)....
                    mark[j]=1;
                }
            }
        }
    }
    for(k=0; k<nprime; k++)
    {
        cout<<prime[k]<<" ";
    }
}
int main()
{
    cin>>n;
    sieve(n);
}
