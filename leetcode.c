#include<stdio.h>
void palindrom(int n)
{
    if(n<0)
        {
            printf("false\n");
            exit(0);

        }
    int p=n;
    int sum=0;
    while(n!=0)
    {
       int rem=n%10;
       sum=sum*10+rem;
       n=n/10;
    }

    if(sum==p)
        printf("true\n");
    else
        printf("false\n");
}
int main()
{
    int n;
    scanf("%d",&n);
    palindrom(n);

}
