#include<bits/stdc++.h>
using namespace std;
//creating a tree...
#define mx 100001
int arr[mx];
int tree[mx*3];
void init(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=arr[b];
        return;
    }
    int left=2*node;
    int right=2*node+1;
    int mid=(b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    if(tree[left]>tree[right])
        tree[node]=tree[left];
    else
        tree[node]=tree[right];
}
//find the sum in a range
int query(int node,int b,int e,int i,int j)
{
    if(b>j||e<i)
        return -10000000;
    if(b>=i&&e<=j)
        return tree[node];
    int left=2*node;
    int right=2*node+1;
    int mid=(b+e)/2;
    int p1=query(left,b,mid,i,j);
    int p2=query(right,mid+1,e,i,j);
    if(p1<p2)
        return p2;
    else
        return p1;
}
int main()
{
    int i,n;
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>arr[i];
    init(1,1,n);
    int p,q;
    cin>>p>>q;
    cout<<query(1,1,n,p,q);
}

