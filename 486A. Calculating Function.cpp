#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int n,sum=0;
    cin>>n;
//    for(i=1;i<=n;i++)
//    {
//        if(i%2==0)
//            sum=sum+i;
//        else
//            sum=sum-i;
//    }
        if(n%2==0)
            sum=n/2;
        else
            sum=-(n+1)/2;
    cout<<sum;
    return 0;
}
