#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int a1,a2,a3,b1,b3,b2,n;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
    int sum_m,sum_c;
    sum_c =a1+a2+a3;
    sum_m =b1+b2+b3;
    int total;
    int cup=sum_c/5;
    if(sum_c%5!=0)cup++;
    int medal=sum_m/10;
    if(sum_m%10!=0)medal++;
    total=cup+medal;
    if(total>n)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}
