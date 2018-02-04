#include<iostream>
using namespace std;
int main()
{
    long long int n;
    int x=0,count=0,c4=0,c3=0,c2=0,c1=0;
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(x==4)
            c4++;
        else if(x==3)
            c3++;
        else if(x==2)
            c2++;
        else if(x==1)
            c1++;
    }

//    cout<<c4<<" "<<c3<<" "<<c2<<" "<<c1<<endl;
    count+=c4;
    c4=0;
    if(c3>=c1)
    {
        count+=c3;
        c3=c1=0;
    }
    else
    {
        count+=c3;
        c1-=c3;
        c3=0;
    }
    if(c2>=c1)
    {
        if(c1%2==0)
        {
            c1/=2;
            count+=c1;
            c2-=c1;
        }
        else
        {
            c1+=1;
            c1/=2;
            count+=c1;
            c2-=c1;
        }
        if(c2>=2)c2/=2;
        count+=c2;
    }
    else
    {
        if(c1%2==0)
        {
            c1/=2;
            count+=c2;
            c1-=c2;
        }
        else
        {
            c1+=1;
            c1/=2;
            count+=c2;
            c1-=c2;
        }
        if(c1>=2)c1/=2;
        count+=c1;
    }
    cout<<count<<endl;
    return 0;
}
