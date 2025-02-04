#include <bits/stdc++.h>
using  namespace std;
void next (int b[], int n){
    int i=n;
    while (b[i]==1){
        b[i]=0;
        i--;
    }
    b[i]=1;
}
bool check(int a[],int b[], int n, int k){
    int sum=0;
    for (int i=1; i<=n; i++){
        if (b[i]){
            sum+=a[i];
        }
    }
    if (sum==k) return true;
    return false;
}
void display(int a[], int b[], int n){
    for (int i=1; i<=n; i++){
        if (b[i]) cout << a[i] << " "; 
    }
    cout << endl;
}
int main(){
    int t=1;
    while (t--){
        int n, k;
        cin >> n >> k;
        int a[n+1];
        int b[n+1]={};
        for (int i=1; i<=n; i++){
            cin >> a[i];
        }
        int cnt=0;
        next (b,n);
        while (b[0]==0){
            if (check(a,b,n,k)) {
                cnt++;
                display(a,b,n);
            }
            next(b,n);
        }
        cout << cnt << endl;

    }
}