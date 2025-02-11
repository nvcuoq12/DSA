#include <bits/stdc++.h>

using namespace std;
int max (int a, int b){
    if (a>b) return a;
    return b;
}

int hieu(int a,int b){
    if (a-b> b-a) return a-b;
    return b-a;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k; cin >> n >>  k;
        int a[n];
        for (int &x : a) cin >> x;
        sort (a,a+n);
        for (int i=1; i<n; i++){
            a[i]+=a[i-1];
        }
        cout << max(hieu(a[k-1],a[n-1]-a[k-1]),hieu(a[n-1]-a[n-k-1],a[n-k-1]))<< endl;            
    }
}