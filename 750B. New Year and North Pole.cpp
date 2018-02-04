#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x,d,nt=0,st=0,tmp=0;
    string pole,s="South",n="North";
    cin>>x;
    int i=0,checker=0,special=0,tc=x;
    while(tc--)
    {
        cin>>d>>pole;
        if((i==0)&&(pole.compare(s)))
            checker=5000;
//            cout<<nt<<endl<<i<<endl;
        if(special==2)
        {
            if(pole.compare(n))
               {
                   checker=8000;
                   special=0;
               }
               else special=0;
        }
        if(!pole.compare(n))
            {nt+=d; st-=d;}
        if(!pole.compare(s))
            {st+=d; nt-=d;}
        if((st>=20000)&&(!pole.compare(s)))
            special=2;
        if(st>20000||nt>20000||st+nt>40000||st-nt<0)
            checker=6000;
///            cout<<nt<<" "<<st<<" "<<special<<" "<<checker<<endl;
        i++;
        if((i==x)&&(pole.compare(n))) checker =5000;
    }

    if(checker==0&&nt==st)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
        return 0;
}
