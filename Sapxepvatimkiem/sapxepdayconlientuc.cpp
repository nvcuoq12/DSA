#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n; cin >> n; int b[n];
        int i=0;
        int a[n]; for (int &x: a) { cin >> x; b[i++] = x; }
        int r=0, l=n-1;
        sort (b, b+n);
        while (a[r]==b[r]) r++;
        while  (a[l]==b[l]) l--;
        cout << r+1 << " " << l+1 << endl;
    }
}