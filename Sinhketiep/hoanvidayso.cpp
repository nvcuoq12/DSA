#include <bits/stdc++.h>
using namespace std;
int key=1;
void next(int b[], int n){
    int i=n-2;
    while (b[i]>b[i+1]){
        i--;
    }
    if (i<0) key=0;
    else {
        int j=n-1;
        while (b[j] < b[i]){
            j--;
        }
        swap(b[i],b[j]);
        reverse(b+i+1, b+n);
    }
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int &x:a) cin >> x;
    sort(a,a+n);
    int b[n];
    for (int i=0; i<n; i++){
        b[i]=i+1;

    }
   
    while (key){
        for (int i=0; i<n; i++){
            cout << a[b[i]-1]<< " ";
        }
        cout << endl;
        next(b,n);
    }
}