#include <bits/stdc++.h>
using namespace std;
void display(vector <int> a){
    cout << "[";
    for (int i=0; i<a.size()-1; i++){
        cout << a[i] << " ";
    }
    cout << a[a.size()-1]<< "] ";
}
void process (vector <int> a){
    vector <int> v;
    for (int i=0; i<a.size()-1; i++){
        v.push_back(a[i]+a[i+1]);
    }
    if (v.size()>0){
        process(v);
        display(v);
    }
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector <int> a;
        for (int i=0; i<n; i++){
            int x; cin >> x;
            a.push_back(x);
        }
        process(a);
        display(a);
        cout << endl;
    }
}
