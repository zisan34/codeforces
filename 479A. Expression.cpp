#include<iostream>
using namespace std;
int main()
{
    int a,b,c,ans=0;
    cin>>a>>b>>c;
    ans=max(ans,a*b+c);
    ans=max(ans,a+b*c);
    ans=max(ans,(a+b)*c);
    ans=max(ans,a*(b+c));
    ans=max(ans,a*b*c);
    ans=max(ans,a+b+c);
    cout<<ans<<endl;
}
