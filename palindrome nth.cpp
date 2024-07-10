#include<iostream>
using namespace std;
int rev(int m)
{
  int sum=0,rem;
  while(m!=0)
  {
      rem=m%10;
      sum=sum*10+rem;
      m=m/10;
  }
  return sum;
}
int main()
{
    int n,c=0,k,i,r;
    cin>>n;
    k=1;
    i=k;
    while(c!=n)
    {
        r=rev(i);
        if(r==i)
            c++;
        i++;
        k++;
    }
    cout<<r<<endl;
}
