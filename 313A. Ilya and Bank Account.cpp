#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>=0)
        cout<<n<<endl;
    else
    {
        int l,r=abs(n%10),tmp=n/10;
        l=abs(tmp%10);
        if(l>r)
        {
            tmp=(tmp-(tmp%10))-r;
        }
        cout<<tmp<<endl;
    }
    return 0;
}
