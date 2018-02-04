#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int al[26];
    for(int i=0;i<26;i++)
        al[i]=0;
    for(int i=0;i<n;i++)
    {
        switch(s[i])
        {
            case 'a': al[0]++;break;
            case 'A':al[0]++;break;
            case 'b': al[1]++;break;
            case 'B':al[1]++;break;
            case 'c': al[2]++;break;
            case 'C':al[2]++;break;
            case 'd': al[3]++;break;
            case 'D':al[3]++;break;
            case 'e': al[4]++;break;
            case 'E':al[4]++;break;
            case 'f': al[5]++;break;
            case 'F':al[5]++;break;
            case 'g': al[6]++;break;
            case 'G':al[6]++;break;
            case 'h': al[7]++;break;
            case 'H':al[7]++;break;
            case 'i': al[8]++;break;
            case 'I':al[8]++;break;
            case 'j': al[9]++;break;
            case 'J':al[9]++;break;
            case 'k': al[10]++;break;
            case 'K':al[10]++;break;
            case 'l': al[11]++;break;
            case 'L':al[11]++;break;
            case 'm': al[12]++;break;
            case 'M':al[12]++;break;
            case 'n': al[13]++;break;
            case 'N':al[13]++;break;
            case 'o': al[14]++;break;
            case 'O':al[14]++;break;
            case 'p': al[15]++;break;
            case 'P':al[15]++;break;
            case 'q': al[16]++;break;
            case 'Q':al[16]++;break;
            case 'r': al[17]++;break;
            case 'R':al[17]++;break;
            case 's': al[18]++;break;
            case 'S':al[18]++;break;
            case 't': al[19]++;break;
            case 'T':al[19]++;break;
            case 'u': al[20]++;break;
            case 'U':al[20]++;break;
            case 'v': al[21]++;break;
            case 'V':al[21]++;break;
            case 'w': al[22]++;break;
            case 'W':al[22]++;break;
            case 'x': al[23]++;break;
            case 'X':al[23]++;break;
            case 'y': al[24]++;break;
            case 'Y':al[24]++;break;
            case 'z': al[25]++;break;
            case 'Z':al[25]++;break;
        }
    }
    int flag=1;
    for(int i=0;i<26;i++)
    {
        if(al[i]==0)
            {
            flag=0;
            break;
            }
    }
    if(flag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
