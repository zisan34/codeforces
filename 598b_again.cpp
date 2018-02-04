#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){
    string s, b, c,d;
    cin >> s;
    int ts, l, r, k;
    cin >> ts;
    for(int t = 1; t<=ts; t++){
        cin >> l >> r >> k;
        for(int i = 0; i<k; i++){
            b = s.substr(0,l-1) + s[r-1];
            c = s.substr(l-1,r-l);
            if(r!=s.length())
                d = s.substr(r,s.length()-r);
            else
                d = "";
            s = b + c + d;
        }
        cout << s << endl;
    }
    //cout << s << endl;
    return 0;
}
