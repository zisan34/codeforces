#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double sum=0,tmp=0;
    int i=0;
    while(i<n)
    {
        cin>>tmp;
        sum+=tmp;
        i++;
    }
    double res=0;
    res=sum/(double)n;
    cout<<showpoint<<setprecision(20)<<res<<endl;
    return 0;

}
