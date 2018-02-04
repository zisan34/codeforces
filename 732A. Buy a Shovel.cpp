#include<iostream>
using namespace std;
int main()
{
    int price,extra;
    cin>>price>>extra;
    int count=0,flag=0,n=1,tmp=0;
    while(flag==0)
    {
        count++;
        tmp=tmp+price;
        if(tmp%10==0||tmp%10==extra)
            flag=1;
    }
    cout<<count<<endl;
    return 0;
}
