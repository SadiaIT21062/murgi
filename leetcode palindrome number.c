#include<iostream>
string palindrom(int n)
{
    int p=n;int sum=0
    while(n!=0)
    {
       int rem=n%10;
       sum=sum*10+rem;
       n=n/10;
    }
    if(sum==p)
        return "true\n"
    else
        return "false\n"
}
int main()
{
    int n;
    scanf("%d",&n);
    palindrom(n);

}
