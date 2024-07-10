#include<stdio.h>
int main()
{
    int t,a,b,c,x,y,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(b!=c)
        {
            x=a-1;
        y=(c-b)+(c-1);
        if(x<y)
            printf("1\n");
        else if(x>y)
            printf("2\n");
        else if(x==y)
            printf("3\n");
        }

    }
}
