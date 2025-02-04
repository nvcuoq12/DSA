#include <bits/stdc++.h>
using namespace std;
void next(int a[], int n, int k){
	int i = k-1;
	while (a[i] == n-k+i+1 && i>=0){
		i--;
	}
	if (i<0) for (int j= 1; j<=k; j++){
		a[j-1]=j;
	}
	else {
		a[i]++;
		for (int j=i+1; j<k ; j++){
			a[j]=a[j-1]+1;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int n,k;
		cin >> n >> k;
		int a[k];
		for (int &x : a) cin >> x;
		next (a, n, k);
		for (int x: a) cout << x << " ";
		cout << endl;
	}
}
