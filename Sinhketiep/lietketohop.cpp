#include <bits/stdc++.h>
using namespace std;
int key=1;
void next(int a[], int n, int k){
    int i=k-1;
    while (a[i]==n-k+i+1){
        i--;
    }
    if (i<0) key=0;
    else {
        a[i]++;
        for (int j=i+1; j<k; j++){
            a[j]=a[j-1]+1;
        }
    }
}
void display(int a[], int nums[], int k){
    for (int i=0;i<k; i++){
        cout << nums[a[i]-1]<<" ";
    } 
    cout << endl;
}
int main(){
    int n, k;
    cin >> n >> k;
    set <int> se;
    for (int i=0; i<n; i++){
        int x; cin >> x;
        se.insert(x);
    }
    n=se.size();
    int nums[n];
    int i=0;
    for (int x:se) nums[i++]=x;
    int a[k];
    for (int i=0; i<k; i++){
        a[i]=i+1;
    }
    while (key){
        display(a,nums,k);
        next(a,n,k);
    }
}