#include <bits/stdc++.h>
using namespace std;
bool continues = true;
void next(vector <int> &a){
    int i=a.size()-2;
    while (a[i]>a[i+1]&& i>=0){
        i--;
    }
    if (i<0) continues=false;
    else{
        int j= a.size()-1;
        while(a[j]<a[i]) j--;
        swap(a[i],a[j]);
        reverse(a.begin()+i+1, a.begin()+a.size());
    }
}
void display (vector <int> v){
    for (int x:v) cout << x;
    cout << " ";
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n; cin >> n;
        vector <int> v;
        for (int i=0; i< n; i++){
            v.push_back(i+1);
        }
        continues=true;
        while (continues){
            display(v);
            next(v);
        }
        cout << endl;

    }
}