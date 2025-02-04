#include <bits/stdc++.h>
using namespace std;
int compare(vector <int> a, vector <int> b, int begin){
    set <int> se;
    for (int i=begin; i< a.size(); i++){
        se.insert(a[i]);
        se.insert(b[i]);
    }
    return se.size()-(a.size()-begin);
}
int count(vector <int> &v, int n, int k){
    vector <int> a=v;
    int i=v.size()-1;
    while (v[i]==n-k+i+1){
        i--;
    }
    if (i>=0){
        v[i]++;
        for (int j=i+1; j<v.size(); j++){
            v[j]=v[j-1]+1;
        }
        return compare(a,v,i);
    }else return k;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n,k;
        cin >> n >> k;
        vector <int> v;
        for (int i=0; i<k; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
         cout << count(v,n,k)<< endl;

    }
}