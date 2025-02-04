#include <bits/stdc++.h>
using namespace std;
int key=1;
void display (int a[], int n){
    for (int i=0; i<n; i++){
        cout << a[i];
    }
    cout << " ";
}
void next(int a[], int n){
    int i=n-2;
    while (a[i]<a[i+1]){
        i--;
    }
    if (i<0) key=0;
    else {
        int j=n-1;
        while (a[j]>a[i]) j--;
        swap(a[i],a[j]);
        reverse(a+i+1, a+n);
    }
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >>n;
        int a[n];
        for (int i=0; i<n; i++){
            a[i]= n-i;
        }
        key=1;
        while (key){
            display(a,n);
            next(a,n);
        }
        cout << endl;
    }
}