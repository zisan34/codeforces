#include<iostream>
using namespace std;
int main()
{
    string host,guest;
    cin>>guest>>host;
    string s=guest+host;
    int al[26];
    for(int i=0;i<26;i++)
        al[i]=0;
    for(int i=0;i<s.length();i++)
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
    string found;
    cin>>found;
    int al2[26];
    for(int i=0;i<26;i++)
        al2[i]=0;
    for(int i=0;i<found.length();i++)
    {
        switch(found[i])
        {
            case 'a': al2[0]++;break;
            case 'A':al2[0]++;break;
            case 'b': al2[1]++;break;
            case 'B':al2[1]++;break;
            case 'c': al2[2]++;break;
            case 'C':al2[2]++;break;
            case 'd': al2[3]++;break;
            case 'D':al2[3]++;break;
            case 'e': al2[4]++;break;
            case 'E':al2[4]++;break;
            case 'f': al2[5]++;break;
            case 'F':al2[5]++;break;
            case 'g': al2[6]++;break;
            case 'G':al2[6]++;break;
            case 'h':al2[7]++;break;
            case 'H':al2[7]++;break;
            case 'i':al2[8]++;break;
            case 'I':al2[8]++;break;
            case 'j':al2[9]++;break;
            case 'J':al2[9]++;break;
            case 'k':al2[10]++;break;
            case 'K':al2[10]++;break;
            case 'l': al2[11]++;break;
            case 'L':al2[11]++;break;
            case 'm': al2[12]++;break;
            case 'M':al2[12]++;break;
            case 'n': al2[13]++;break;
            case 'N':al2[13]++;break;
            case 'o': al2[14]++;break;
            case 'O':al2[14]++;break;
            case 'p': al2[15]++;break;
            case 'P':al2[15]++;break;
            case 'q': al2[16]++;break;
            case 'Q':al2[16]++;break;
            case 'r': al2[17]++;break;
            case 'R':al2[17]++;break;
            case 's': al2[18]++;break;
            case 'S':al2[18]++;break;
            case 't': al2[19]++;break;
            case 'T':al2[19]++;break;
            case 'u': al2[20]++;break;
            case 'U':al2[20]++;break;
            case 'v': al2[21]++;break;
            case 'V':al2[21]++;break;
            case 'w': al2[22]++;break;
            case 'W':al2[22]++;break;
            case 'x': al2[23]++;break;
            case 'X':al2[23]++;break;
            case 'y': al2[24]++;break;
            case 'Y':al2[24]++;break;
            case 'z': al2[25]++;break;
            case 'Z':al2[25]++;break;
        }
    }
    int flag=1;
    for(int i=0;i<26;i++)
    {
        if(al[i]!=al2[i])
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
