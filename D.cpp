#include<stdio.h>
int main()
{
    int s[25],n,i,j,a,b,c,sum;
    scanf("%d",&n);
    scanf("%d%d%d",&a,&b,&c);
    s[1]=a;
    s[2]=b;
    s[3]=c;
    for(i=4;i<=n;i++)
    {
        sum=0;
        for(j=i-1;j>=i-3;j--)
        {
            sum=sum+s[j];
        }
        s[i]=sum;
    }
    printf("%d\n",s[n]);
}
