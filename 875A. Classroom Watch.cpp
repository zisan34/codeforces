#include<bits/stdc++.h>
using namespace std;
int isequal(int a)
{
    int sum=a;
    while(a>0)
    {
        sum+=a%10;
        a/=10;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    //vector<int> v;
    int s=0;
    for(int i=1;i<=n;i++)
    {
        int tmp=isequal(i);
        if(tmp==n){s++;}
    }
//    int l=v.size();
    printf("%d\n",s);
    for(int i=1;i<=n;i++)
    {
        int tmp=isequal(i);
        if(tmp==n){printf("%d\n",i);}
    }
//    for(int i=0;i<l;i++)
//        cout<<v[i]<<endl;
    return 0;

}
