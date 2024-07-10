#include<stdio.h>
void bubble(int a[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("sorted array\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

int binary_search(int a[],int n)
{
    int l=0,r=n-1,mid,data;
    scanf("%d",&data);
    while(l<=r)
    {
         mid=(l+r)/2;
         if(a[mid]==data)
             return mid;
         else if(data<a[mid])
             r=mid-1;
         else if(data>a[mid])
             l=mid+1;
    }
    printf("nai\n");
    exit(0);

}
int main()
{
    int a[20],n=20,i,j;
    for(i=0;i<n;i++)
    {
        a[i]=rand()%100;
    }
    printf("unsorted array\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    bubble(a,n);
    int p=binary_search(a,n);
    printf("The element stays at:%d\n",p);
    return 0;
}

