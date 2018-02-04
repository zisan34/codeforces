#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int p[x];
    int i;
    for(i=0;i<x;++i)
    {
        cin>>p[i];
    }
    p[i]='\0';
//    for(i=0;i<x;i++)
//    {
//        cout<<p[i];
//    }
//    cout<<p<<endl;
//    i=0;
//    sort(p[i],p[x]);
    int j,k;
    for(j=0;j<x;j++)
    {
        for(k=0;k<x;k++)
        {
            if(p[k]>p[j])
                swap(p[k],p[j]);
        }
    }
//    for(i=0;i<x;i++)
//    {
//        cout<<p[i]<<" ";
//    }
//    cout<<endl;
    int dif=0,best=10000,up=0,down=0,a=0,st;
    st=n-1;
    for(a=n-1;a<x;a++)
    {
        up=a;
        down=up-st;
        dif=p[up]-p[down];
        if(best>dif)
            best=dif;
    }
    cout<<best<<endl;
    return 0;
}
