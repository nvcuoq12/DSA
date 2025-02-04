#include <bits/stdc++.h>
using namespace std;
int x[2]={0,1};
int y[2]={1,0};
vector<char> result;
void display(vector <char> v){
    for (char x:v ) cout << x ;
    cout <<" ";
}
int key=-1;
void Try(int a[][12], int i, int j, int n){
    if (a[i+x[0]][j+y[0]]==1){
        result.push_back('R');
        Try(a,i+x[0],j+y[0],n);
        result.pop_back();
    }else if (a[i+x[1]][j+y[1]]==1){
        result.push_back('D');
        Try(a,i+x[1],j+y[1],n);
        result.pop_back();
    }else if (i==n-1&&j==n-1) {display(result); key=1;}
}
int main(){
    int t;
    cin >> t;
    while (t--){
        key=-1;
        int n; cin >> n;
        int a[n+1][n+1]={};
        for (int i=0; i<n; i++){
            for (int j=0; j< n; j++){
                cin >> a[i][j];
            }
        }
        if (a[0][0]==0) cout << -1;
        else Try(a,0,0,n);
        if (key==-1) cout <<-1 ;
        cout << endl;
    }
}