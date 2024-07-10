#include<iostream>
using namespace std;
int main()
{
    int a[100],n,i,j,k,temp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    k=1;
    for(i=0;i<n-k;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    k++;
    for(i=0;i<n;i++)
        cout<<a[i]<<endl;

}
