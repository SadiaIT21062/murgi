#include<stdio.h>
int main()
{
    int i,j,t,flag,m,k,c,p,a,b,sum;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d",&a,&b);
        c=0;
        if(a==1)
            a=a+1;
        for(j=a; j<=b; j++)
        {
            flag=0;
            for(k=2; k<j; k++)
            {
                if(j%k==0)
                {
                    flag=1;
                    break;
                }
            }
            sum=0;
            if(flag==0)
            {
                m=j;
                p=0;
                while(m!=0)
                {
                    sum=sum+m%10;
                    m=m/10;
                }
                for(k=2; k<sum; k++)
                {
                    if(sum%k==0)
                    {
                        p=1;
                        break;
                    }

                }
                if(p==0)
                    c++;
            }

        }
        printf("%d\n",c);
    }
    return 0;
}

