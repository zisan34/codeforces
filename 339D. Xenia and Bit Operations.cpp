#include<bits/stdc++.h>
#define max 300000
int tree[max],arr[max],check=0;
void init(int node,int s,int e)
{
    if(s==e){tree[node]=arr[s]; check=1; return;}
    int left=node*2,right=(node*2)+1,mid=(s+e)/2;
    init(left,s,mid);
    init(right,mid+1,e);
    if(check%2==1)tree[node]=tree[left]|tree[right];
    else if(check%2==0)tree[node]=tree[left]^tree[right];
    check++;
}
void update(int node,int s,int e, int index,int value)
{
    if(s>index||e<index)return;
    if(s==e){ tree[node]=value; check=1; return;}
    int left=node*2;
    int right=(node*2)+1;
    int mid=(s+e)/2;
    update(left,s,mid,index,value);
    update(right,mid+1,e,index,value);
    if(check%2==1)tree[node]=tree[left]|tree[right];
    else if(check%2==0)tree[node]=tree[left]^tree[right];
    check++;
}
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int limit=pow(2,n);
    for(int i=1;i<=limit;i++)
        cin>>arr[i];
    init(1,1,limit);
        int pos,v;
    for(int i=0;i<m;i++)
    {
        cin>>pos>>v;
        update(1,1,limit,pos,v);
        cout<<tree[1]<<endl;
    }
    return 0;
}
