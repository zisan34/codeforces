#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    long double l;
    cin>>n>>l;
    long double lights[n];
    for(int i=0;i<n;i++)
    {
        cin>>lights[i];
    }
    sort(lights,lights+n);

    long double maxd=0,tmp;
    maxd=lights[0]-0;
    for(int i=1;i<n;i++)
    {
        tmp=(lights[i]-lights[i-1])/2;
        if(tmp>maxd)
            maxd=tmp;
    }
    if(lights[n-1]!=l)
    {
        if((l-lights[n-1])>maxd)
            maxd=l-lights[n-1];
    }
//    cout<<maxd<<endl;
//    printf("%.10Lf\n",maxd);//615683844
    cout<<showpoint<<setprecision(30)<<maxd<<endl;
    return 0;
}
