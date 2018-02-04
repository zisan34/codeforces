#include<iostream>
using namespace std;
int main()
{
    int n,m,tmp;
    cin>>n>>m;
    if(n<m)
        tmp=n;
    else
        tmp=m;
    if(tmp%2==0)
    {
        cout<<"Malvika"<<endl;
    }
    else
        cout<<"Akshat"<<endl;
    return 0;
}
