#include<iostream>
using namespace std;
int main()
{
    int n,out;
    cin>>n;
    int x=n;
    while(x)
    {
        x++;
        n=x;
        int a,b,c,d;
        d=n%10;
        n=n/10;
        c=n%10;
        n=n/10;
        b=n%10;
        n=n/10;
        a=n%10;
        n=a*1000+b*100+c*10+d;
        if(a!=b&&b!=c&&c!=d&&a!=d&&a!=c&&b!=d)
            break;
    }
    cout<<n<<endl;
    return 0;
}
