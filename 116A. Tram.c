#include<iostream>
using namespace std;
int main()
{
    int s=0,e=0,l=0,max=0,current=0;
    cin>>s;
    for(s--)
    {
        cin>>l>>e;
        current=current+(l-e);
        if(current>max)
            max=current;
    }
    cout<<max;
}
