#include<iostream>
#include<string>
using namespace std;
int main()
{

    string s;
    cin>>s;
    int n;
    cin>>n;

    if(s.length()%n!=0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        int s_length=s.length()/n;

        int flag=0;
        for(int cnt=0;cnt<s.length();cnt+=s_length)
        {
            string sub=s.substr(cnt,s_length);


            int sub_length=sub.length();

            int i,j;

            if(sub_length%2==0)
            {
                for(i=0,j=sub_length-1;i<sub_length/2&&j>=sub_length/2;i++,j--)
                {
                    if(sub[i]!=sub[j])
                    {
                        flag=1;
                        break;
                    }
                }
            }
            else
            {
                for(i=0,j=sub_length-1;i<=sub_length/2&&j>=sub_length/2;i++,j--)
                {
                    if(sub[i]!=sub[j])
                    {
                        flag=1;
                        break;
                    }
                }
            }

            if(flag==1)
            {
                break;
            }
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
