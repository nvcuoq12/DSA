#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll modulo=1e9+7;
ll dao(ll n){
    ll r=0;
    while (n>0){
        r=r*10+n%10;
        n/=10;
    }
    return r;
}
ll luythua(ll n, ll r){
    if (r==0) return 1;
    if (r%2==1) return n*luythua(n,r-1)%modulo;
    ll half= luythua(n,r/2)%modulo;
    return (half*half)%modulo;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        ll r =dao(n);
        cout << luythua(n,r) << endl;
    }
}