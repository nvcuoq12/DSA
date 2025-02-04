#include <bits/stdc++.h>
using namespace std;
void display (int a[], int n){
    for (int i=1; i<=n; i++){
        cout << a[i] << " ";
    }
    if (n%2==0) {
        cout << a[n]<< " ";   
    }
    for (int j=n-1; j>=1; j--){
        cout << a[j] << " ";
    }
    cout << endl;
}
int main(){
    int x;
    cin >> x;
    int n;
    if (x%2==0){
        n=x/2;
    }else n=x/2+1;
    int a[n+1]={};
    while (a[0]==0){
        display(a,n);
        int i=n;
        while (a[i]==1){
            a[i]=0;
            i--;
        }
        a[i]=1;
    }
}