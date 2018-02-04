#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,count=0,tmp=0;
    for(i=5;i>0;i--)
    {
        count=count+n/i;
        n=n%i;
    }
    cout<<count<<endl;
}
