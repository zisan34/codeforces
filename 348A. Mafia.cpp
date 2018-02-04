#include<iostream>
using namespace std;
long long bs(long long size,long long m)
{
    long long start=0,end=m,mid=0,res;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(mid*(size-1)>=m)
            {end=mid-1; res=mid;}
        else
            start=mid+1;
    }
    return res;
}
int main()
{
    long long n;
    cin>>n;
    long long maximum=0,tmp=0,max=0;
    for(long long i=0;i<n;i++)
    {
        cin>>tmp;
        if(tmp>max)max=tmp;
        maximum+=tmp;
    }
    int minimum=bs(n,maximum);
    if(minimum<max)cout<<max<<endl;
    else cout<<minimum<<endl;
    return 0;
}
