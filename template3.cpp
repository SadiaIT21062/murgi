#include<iostream>
using namespace std;
template<class T>
T sorting(T a[],T n)
{
    T i;
    T j;
    T temp;
   for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
             if(a[j+1]<a[j])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
int main()
{
    int a[5]={200,2,100,2,4};
    sorting(a,5);
}

