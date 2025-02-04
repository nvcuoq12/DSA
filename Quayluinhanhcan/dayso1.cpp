#include <bits/stdc++.h>
using namespace std;
void display(vector <int> v){
    cout << "[";
    for (int i=0; i<v.size()-1; i++){
        cout << v[i] << " ";
    }
    cout << v[v.size()-1] << "]"<< endl;
}
void process(vector <int> v){
    display(v);
    vector <int> a;
    for (int i=0; i<v.size()-1; i++){
        a.push_back(v[i]+v[i+1]);
    }
    if (a.size()>0) process(a);
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector <int> v;
        for (int i=0; i<n; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        process(v);
    }
}