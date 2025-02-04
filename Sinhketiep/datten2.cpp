#include <bits/stdc++.h>
using namespace std;
int key=1;
string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
void next(vector <char> &v, int n){
    int i=v.size()-1;
    while (v[i] == s[n-v.size()+i] && i>=0){
        i--;
    }
    if (i<0) key=0; else{
        v[i]=s[v[i]-'A'+1];
        for (int j=i+1; j<v.size(); j++){
            v[j]=s[v[j-1]-'A'+1];
        }
    }
}
int main(){
    int t;
    cin>> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        vector <char> v;
        for (int i=0; i<k; i++){
            v.push_back(s[i]);
        }
        key=1;
        while (key){
            for (char x:v) cout << x;
            cout << endl;
            next(v,n);
        }

    }
}