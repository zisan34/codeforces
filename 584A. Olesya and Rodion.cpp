#include<iostream>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    if(t==10)
    {
        if(n==1)
            cout<<-1<<endl;
        else
        {
            n--;
            while(n--)
            {
                cout<<1;
            }
            cout<<0<<endl;
        }
    }
    else
        while(n--)
        cout<<t;
        cout<<endl;
    return 0;
}
