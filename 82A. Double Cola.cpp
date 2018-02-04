#include<iostream>
using namespace std;
int main()
{
    int count=0,factor=1,flag=0,x=0,n,pn;
    string name="slprh";
    cin>>n;
    flag=5*factor;
    while(flag<n)
    {
        factor*=2;
        flag=5*factor;
    }
    factor/=2;
    cout<<factor<<endl;
    flag=5*factor;
    pn=n-flag;
    while(x<pn)
    {
        x+=factor;
        count++;
        //cout<<count<<" "<<x<<" ";
    }
    cout<<name[count-1]<<endl;
    return 0;
}
