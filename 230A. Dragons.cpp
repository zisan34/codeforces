#include<iostream>
using namespace std;
int swap(int &a,int &b)
{
    int tmp;
    tmp=a;
    a=b;
    b=tmp;
}
int main()
{
    int pHealth,nOfDragon;
    cin>>pHealth>>nOfDragon;
    int dHealth[nOfDragon],bonus[nOfDragon];
    for(int i=0;i<nOfDragon;i++)
    {
        cin>>dHealth[i]>>bonus[i];
    }
//    for(int i=0;i<nOfDragon;i++)
//    {
//        cout<<dHealth[i]<<" "<<bonus[i]<<endl;
//    }
    int tmpH,tmpB;
    for(int i=0;i<nOfDragon;i++)
    {
        for(int j=0;j<nOfDragon;j++)
        {
            if(dHealth[i]<dHealth[j])
            {
                swap(dHealth[i],dHealth[j]);
                swap(bonus[i],bonus[j]);

            }
        }
    }
//    for(int i=0;i<nOfDragon;i++)
//    {
//        cout<<dHealth[i]<<" "<<bonus[i]<<endl;
//    }
    int flag=1;
    for(int i=0;i<nOfDragon;i++)
    {
        if(pHealth<=dHealth[i])
        {
            flag=0;
            break;
        }
        else
        {
            pHealth+=bonus[i];
        }
    }
    if(flag==0)
        cout<<"NO"<<endl;
    else if(flag=1)
        cout<<"YES"<<endl;
    return 0;

}
