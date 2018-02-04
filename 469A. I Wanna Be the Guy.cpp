#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int round[n],x,i=0,count=0;
    i=0;
    int p,q;
    while(i<n)
    {
        round[i]=0;
        i++;
    }
    i=0;
    cin>>p;
    while(i<p)
    {
        cin>>x;
        round[x-1]=1;
        i++;
    }
    i=0;
    cin>>q;
    while(i<q)
    {
        cin>>x;
        round[x-1]=1;
        i++;
    }
    i=0;
    for(i=0;i<n;i++)
    {
        if(round[i]==1)
            count++;
    }
    if(count==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else
        cout<<"Oh, my keyboard!"<<endl;
    return 0;
}
