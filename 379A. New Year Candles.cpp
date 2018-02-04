#include<iostream>
using namespace std;
int main()
{
    int a,b,r=0,d=0,t=0;
    cin>>a>>b;
        t=a;
        while(a>=b)
        {
            r=a%b;
            d=a/b;
            t+=d;
            a=d+r;
//            count++;
//            cout<<a<<" "<<r<<endl;
        }
//        t+=r;

        cout<<t<<endl;
    return 0;
}
