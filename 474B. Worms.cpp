#include<iostream>
using namespace std;
void bs(int a[],int l,int key)
{
    int start=0,end=l-1,mid=0,index;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(key==a[mid]){start=mid;break;}
        else if(key>a[mid])start=mid+1;
        else if(key<a[mid])end=mid-1;
    }
    cout<<start+1<<endl;
}
int main()
{
    int n;
    cin>>n;
    int worms[n];
    for(int i=0;i<n;i++)
    {
        int tmp;
        cin>>tmp;
        if(i>0)worms[i]=worms[i-1]+tmp;
        else
            worms[i]=tmp;
    }
    int m;
    cin>>m;
    int juicy;
    for(int i=0;i<m;i++)
    {
        cin>>juicy;
        bs(worms,n,juicy);
    }
    return 0;

}
