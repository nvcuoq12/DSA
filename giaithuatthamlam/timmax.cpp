#include <bits/stdc++.h>
using namespace std;
#define ll long long
int modulo = 1e9+7;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n];
        for (int &x : a) cin >> x;
        sort (a,a+n);
        ll max=0;
        ll tmp=0;
        for (int i=n-1; i>0; i--){
            tmp=a[i]*i%modulo;
            max=(max+tmp)%modulo; 
        }
        cout << max << endl;
    }
}