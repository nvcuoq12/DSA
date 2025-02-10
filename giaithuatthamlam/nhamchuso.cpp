#include <bits/stdc++.h>
using namespace std;
int maxx(string s){
    int ss=0; 
    for (int i=0; i< s.length(); i++){
        if (s[i]=='5') s[i]='6';
        ss=ss*10 + s[i]- '0';
    }
    return ss;
}
int minn(string s){
    int ss=0;
    for (int i=0; i<s.length(); i++){
        if (s[i]=='6') s[i]='5';
        ss=ss*10+s[i]-'0';
    }
    return ss;
}
int main(){
    string a,b;
    cin >> a >> b;
    cout << minn(a)+minn(b) <<" " << maxx(a)+maxx(b);
}