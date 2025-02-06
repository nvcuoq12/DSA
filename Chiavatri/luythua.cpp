#include <bits/stdc++.h>
using namespace std;
long long modulo=1e9+7;
long long luythua(long long n, long long k){
    if (k==0) return 1;
    if (k%2==1) return n*luythua(n,k-1)%modulo;
    long long t=luythua(n,k/2)%modulo;
    return (t*t)%modulo;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        long long n,k;
        cin >> n >> k;
        cout << luythua(n,k)<< endl;
    }
}