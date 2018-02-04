#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,p;
    cin>>n;
    int i=0;
    int mp[n];
    while(i<n)
    {
        cin>>mp[i];
        i++;
    }
    int count=1;
    for(i=1;i<n;i++)
    {
        if(mp[i-1]!=mp[i])
            count++;
    }
    cout<<count<<endl;
}
