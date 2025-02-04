#include <bits/stdc++.h>
using namespace std;
void next(int a[], int n){
    int i=n;
    while (a[i]==1){
        a[i]=0;
        i--;
    }
    a[i]=1;
}
bool check(int a[], int n, int k){
    int cnt=0;
    for (int i=1; i<=n; i++){
        if (a[i]==1) cnt++;
        if (cnt>k) return false;
    }
    if (cnt==k) return true;
    return false;
}
void display (int a[], int n){
    for (int i=1; i<=n; i++){
        cout << a[i];
    }
    cout <<endl;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        int a[n+1]={};
        while (a[0]==0){
            if (check(a,n,k)) display (a,n);
            next(a,n);    
        } 
    }
}