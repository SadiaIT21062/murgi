#include<iostream>
using namespace std;
int n,m,i,j,temp,a[100],sum;
void bubble(int a[],int m)
{
     for(i=0;i<m-1;i++)
    {
        for(j=0;j<m-i-1;j++)
        {
             if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{

    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    bubble(a,m);
    sum=0;
    for(i=0;i<m-1;i++)
    {
        sum=sum+a[i+1]-a[i];
    }
    cout<<sum<<endl;
}
