#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b,c,suma=0,sumb=0,sumc=0;
    for(int i=0;i<n;i++)
        {
            cin>>a;
            suma+=a;
        }
    for(int i=0;i<n-1;i++)
    {
        cin>>b;
        sumb+=b;
    }
    for(int i=0;i<n-2;i++)
    {
        cin>>c;
        sumc+=c;
    }
    cout<<suma-sumb<<endl;
    cout<<sumb-sumc<<endl;
    return 0;

}
