#include<stdio.h>
int main()
{
    int t,i,a,b,c,k;

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&k);
        if((a+b+c-k)%3==0)
            printf("Case %d: Peaceful\n",i);
        else
            printf("Case %d: Fight\n",i);
    }
    return 0;
}
