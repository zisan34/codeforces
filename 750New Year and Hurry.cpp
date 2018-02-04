#include<iostream>
using namespace std;
int main()
{
    int p,t,i,count=0;
    cin>>p>>t;
    i=1;
    for(i=1;i<=p;i++)
    {
        t=t+i*5;
        if(t>240)
            break;
        count++;
    }
    cout<<count<<endl;
    return 0;

}
