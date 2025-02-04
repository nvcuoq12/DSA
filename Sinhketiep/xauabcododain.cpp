#include <bits/stdc++.h>
using namespace std;
void next(int a[],int n){
    int i=n;
    while (a[i]==1 && i>=0){
        a[i]=0;
        i--;
    }
    a[i]=1;
}
void display(int a[], int n){
    for (int i=1; i<=n; i++){
        if (a[i]) cout << "B";else cout << "A";
    }
    cout << " ";
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n+1]={};
        while (a[0]==0){
            display(a,n);
            next(a,n);
        }
        cout << endl;
    }
}