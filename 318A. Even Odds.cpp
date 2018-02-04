#include<iostream>
using namespace std;
int main()
{
    long long int n,k,x,tmp;
    cin>>n>>k;
    if(n%2!=0)
    {
        n+=1;
    }
    tmp=n/2;
        if(k<=tmp)
            x=(2*k)-1;
        else
        {
            k=k-tmp;
            x=2*k;
        }
    cout<<x;
    return 0;
}
