#include<iostream>
using namespace std;
int main()
{
    int n,tmp,l;
    while(cin>>n)
    {
        if(n%4==0||n%7==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        tmp=n;
        l=0;
        while(tmp>0)
        {
            if(tmp%10==4||tmp%10==7)
                l=1;
                else
                {l=0; break;}
            tmp=tmp/10;
        }
        if(l==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
