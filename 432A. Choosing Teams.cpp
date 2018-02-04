#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int y[n];
    for(int i=0;i<n;i++)
        cin>>y[i];
    sort(y,y+n);
    int count=0;
    for(int i=2;i<n;i+=3)
    {
        if((5-(y[i-2]))>=k&&(5-(y[i-1]))>=k&&(5-(y[i]))>=k)
            count++;
        else
            break;
    }
    cout<<count<<endl;

    return 0;
}
