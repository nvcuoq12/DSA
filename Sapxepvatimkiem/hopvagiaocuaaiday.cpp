#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n,m;
        cin >> n >> m;
        map <int , int> mp;
        set <int> se;
        for (int i=0; i<n; i++){
            int x;
            cin >> x;
            se.insert(x);
            mp.insert(make_pair(x,1));
        }
        for (int i=0; i<m; i++){
            int x;
            cin >> x;
            se.insert(x);
            if (mp.find(x)!= mp.end()) mp[x]++;
        }
        for (int x: se) cout << x <<" ";
        cout << endl;
        for (pair <int , int > x: mp) if (x.second >1) cout << x.first << " ";
        cout << endl; 
    }
    
}