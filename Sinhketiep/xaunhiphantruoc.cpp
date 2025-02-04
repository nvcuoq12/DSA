#include <bits/stdc++.h>
using namespace std;
void back(string& s){
    int i=s.length()-1;
    while (s[i]=='0'&& i>=0){
        s[i]='1';
        i--;
    }
    if (i>=0) s[i]='0';
}
int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        back(s);
        cout << s << endl;
    }
}