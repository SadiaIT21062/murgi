#include<stdio.h>
int main()
{
    int a[1001],n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n;i>=1;i--)
    {
        printf("%d ",a[i]);
    }
}
