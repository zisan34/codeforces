#include<iostream>
using namespace std;
int main()
{
    int n,current,max,available=0;
    cin>>n;
    while(n--)
    {
        cin>>current>>max;
        if(max-current>=2)
            available++;
    }
    cout<<available<<endl;
    return 0;
}
