#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int value;
        cin >> value;
        int coins[10]={1,2,5,10,20,50,100,200,500,1000};
        int ans[10]={};
        for (int i=9; i>=0; i--){
            while (value >= coins[i]){
                ans[i]++;
                value -= coins[i];
            }
        }
        int cnt=0;
        for (int i=0; i<10; i++) cnt+=ans[i];
        cout << cnt << endl;
    }
}