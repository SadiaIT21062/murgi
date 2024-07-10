#include<stdio.h>
int main()
{
    int n,j,a[1000],c,k,i=1;

    while(scanf("%d",&n)!=EOF)
    {
        c=0;k=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            if(a[j]>=1&&a[j]<=99)
                c++;
            else if(a[j]==0)
                k++;
        }
        printf("Case %d: %d\n",i,c-k);
        i++;
    }
}
