#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0;
    cout<<n/2<<endl;
    if(n%2==0)
    {
        for(i=2;i<=n;i+=2)
            {cout<<"2"<<" ";}
            cout<<endl;
    }
    else
    {
        for(i=2;i<n-2;i+=2)
        {
            cout<<"2"<<" ";
        }
        cout<<"3"<<endl;
    }
    return 0;
}
