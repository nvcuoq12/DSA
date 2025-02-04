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
bool check (int a[], int n){
    if (a[1]==1 && a[n]==0){
        for (int i=1; i<n; i++){
            if (a[i]==1 && a[i+1]==1) return false; 
        }
        return true;
    }
    return false;
}
void display(int a[], int n){
    for (int i=1; i<=n; i++){
        if (a[i]) cout <<"H";
        else cout << "A";
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n+1]={};
        while (a[0]==0){
            if (check(a,n)) display(a,n);
            next(a,n);
        }
    }
}