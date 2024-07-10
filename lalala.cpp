#include<stdio.h>
int main()
{
    int n,i,j,a[101][101];
    scanf("%d",&n);
    int len=2*n-1,last=len,start=1;
    while(n!=0)
    {
        for(i=1;i<=len;i++)
      {
        for(j=1;j<=len;j++)
        {
            if(i==start||i==last||j==start||j==last)
                    a[i][j]=n;


        }
      }
      start++;
      last--;
      n--;
    }

    for(i=1;i<=len;i++)
    {
        for(j=1;j<=len;j++)
            printf("%d ",a[i][j]);
            printf("\n");
    }

}
