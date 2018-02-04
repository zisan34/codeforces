#include<bits/stdc++.h>
using namespace std;
int lower(int a[],int start,int end,int key)
{
    //int start=s,end=e;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(key==a[mid]){end=mid-1;}
        else if(key<a[mid])start=mid+1;
        else end=mid-1;
    }
    //cout<<start<<" "<<end<<endl;
    return start;
}
int upper(int a[],int start,int end,int key)
{
    //int start=s,end=e;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(key==a[mid]){start=mid+1;}
        else if(key<a[mid])start=mid+1;
        else end=mid-1;
    }
    //cout<<start<<" "<<end<<endl;
    return start;
}
int tlower(int a[],int start,int end,int key)
{
    //int start=s,end=e;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(key==a[mid]){end=mid-1;}
        else if(key>a[mid])start=mid+1;
        else end=mid-1;
    }
    return start;
}
int tupper(int a[],int start,int end,int key)
{
    //int start=s,end=e;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(key==a[mid]){start=mid+1;}
        else if(key>a[mid])start=mid+1;
        else end=mid-1;
    }
    return start;
}
int main()
{
    int n,r;
    cin>>n>>r;
    int p[n],t[n];
    for(int i=0;i<n;i++)
        cin>>p[i]>>t[i];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(p[i]>p[j])
                {swap(p[i],p[j]); swap(t[i],t[j]);}
            if(p[i]==p[j]){
                if(t[i]<t[j])
                {swap(p[i],p[j]); swap(t[i],t[j]);}
            }
        }
    }

//    cout<<endl;
//    for(int i=0;i<n;i++)
//    {
//        cout<<p[i]<<" "<<t[i]<<endl;
//    }
    int pk=p[r-1];
//    cout<<endl<<pk<<endl;
    int tk=t[r-1];

    int pl=lower(p,0,n-1,pk);
    int ph=upper(p,0,n-1,pk)-1;
//    cout<<endl<<ph<<" "<<pl<<endl;

    int tl=tlower(t,pl,ph,tk);
    int th=tupper(t,pl,ph,tk);
//    cout<<endl<<th<<" "<<tl<<endl;
    if(th==tl)cout<<(th-tl)+1<<endl;
    else cout<<th-tl<<endl;

    return 0;


}
