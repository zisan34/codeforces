#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],tmp,total=0;
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        total+=tmp;
        if(i>0)arr[i]=arr[i-1]+tmp;
        else arr[i]=tmp;
    }
    if(total%3==0)
    {
        int sum=total/3,cnt=0;
        for(int i=0;i<n;i++)
        {
            if(sum==0)
            {
                if(arr[i]==0)cnt++;
                else continue;
            }
            else
            {
                if(arr[i]==sum)
               cnt++;
            else if(arr[i]>sum)
            { if(arr[i]%sum==0)cnt++;
                else continue; }
            }
        }
        cout<<cnt-2<<endl;
    }
    else cout<<0<<endl;

}
