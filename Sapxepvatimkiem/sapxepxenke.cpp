#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n];
        for (int &x : a) cin >> x;
        sort(a,a+n, greater <int> ());
        int i=0;
        while (i<n/2){
            cout << a[i] << " " << a[n-i-1] << " ";
            i++;
        }
        if (n%2==1) cout << a[n/2] << endl;
        else cout << endl;
    }
}