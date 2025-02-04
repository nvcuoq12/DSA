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
void display(int a[], int n){
    for (int i=1; i<=n; i++){
        if (a[i]) cout << 8;
        else cout << 6;
    }
    cout << endl;
}
bool check (int a[], int n){
    if (a[1]==1&& a[n]==0){
        for (int i=1; i<n-1; i++){
            if (a[i]==1&& a[i+1]==1) return false;
            if (i<n-2){
                if (a[i]==0){
                    if (a[i+1]==0){
                        if (a[i+2]==0){
                            if (a[i+3]==0){
                                return false;
                            }
                        }
                    }
                }
            }
        }
        return true;
    }
    return false;
}
int main(){
    int n; 
    cin >> n;
    int a[n+1]={};
    a[1]=1;
    while (a[0]==0){
        next(a,n);
        if (check(a,n)) display(a,n);
    }
}