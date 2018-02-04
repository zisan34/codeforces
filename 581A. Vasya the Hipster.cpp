#include<iostream>
using namespace std;
int main()
{
    int r,b,d,s;
    cin>>r>>b;
    if(r>b)
    {
        cout<<b<<" ";
        r-=b;
        s=r/2;
        cout<<s<<endl;
    }
    else
    {
        cout<<r<<" ";
        b-=r;
        s=b/2;
        cout<<s<<endl;
    }
    return 0;
}
