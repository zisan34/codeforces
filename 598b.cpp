#include <iostream>
#include <string>
#include <cstdio>

using namespace std;
int main ()
{
    string input_string;
   //char input_string[10000];
    int operation, len1,len2,k;
    cin>>input_string;
   // scanf("%s",&input_string);
    cin>>operation;
    while (operation--)
    {
        cin>>len1>>len2>>k;
        int ln;
        ln=input_string.length();
        while(k--){
        char last;
        /*for(int i=len2-1;i>=len1-1;i--)
        {
          input_string[i]=input_string[i-1];
        }*/
        int a1,a2,a3;
        a1=len1-1;
        a2=(len2-1)-(len1-1);
        a3=(ln-1)-(len2-1);
        string str1,str2,str3,tem;
        tem.reserve(ln);
        str1=input_string.substr(0,a1);
        str2=input_string.substr(a1+1,a2);
        str3=input_string.substr(a2+1,a3);
        last=str2[a2-1];
        tem[0]=last;
        ln=str2.length();
        str2=str2.substr(1,ln-1);
        str2=tem+str2;

        str2=str2+str3;
        input_string=str1+str2;
        }
    }
    cout<<input_string<<endl;
    return 0;
}
