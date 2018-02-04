#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,k,i,count=0,flag=0;
    cin>>n>>k;
    for(i=1;i<=n/2;i++)
    {
    if(k==1)
        {
            cout<<1<<endl;
            flag=1;
            break;
        }
        if(n%i==0)
            count++;
        if(count==k)
        {
            cout<<i<<endl;
            flag=1;
            break;
        }

    };
    if(count+1==k)
    {
        cout<<n<<endl;
    }
    else if(k>count+1)
    {
        cout<<-1<<endl;
    }

    return 0;
}
