#include<bits/stdc++.h>
using namespace std;
void bs(int a[],int l,int key)
{
    int start=0,end=l-1,mid=0;
    if(a[0]>key){cout<<0<<endl;return;}
    while(start<=end)
    {
        mid=(start+end)/2;
        if(a[mid]==key)
        {
            start=mid+1;
        }
        else if(a[mid]<key)
        {
            start=mid+1;
        }
        else end=mid-1;
    }
    cout<<start<<endl;
}
int main()
{
    int n;
    cin>>n;
    int price[n];
    for(int i=0;i<n;i++)
        cin>>price[i];
    sort(price,price+n);
    int q,money;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>money;
        bs(price,n,money);
    }
    return 0;

}
