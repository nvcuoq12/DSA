#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while (t--){
        int n; cin >> n;
        vector <int> v;
        for (int i=0; i<n; i++) {
            int x; cin >> x;
            if (x!=0) v.push_back(x);
        }
        
        if (v.size()%2==1) v.push_back (0);
        sort(v.begin(), v.end());
        ll sum=0;
        for (int i=0; i<v.size(); i+=2){
            sum=sum*10+v[i]+v[i+1];
        }
        cout << sum << endl;

    }
}