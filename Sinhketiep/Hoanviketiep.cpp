#include <bits/stdc++.h>
using namespace std;
void next (int a[], int n){
	int i=n-2;
	while (a[i] > a[i+1] && i>=0){
		i--;
	}
	if (i<0) {
		for (int i=1; i<= n; i++){
			a[i-1]=i;
		}
	}else {
		int vt;
		for (int j=n-1; j>i; j--){
			if (a[j]> a[i]){
				vt=j;
				break;
			}
		} 
		swap(a[i], a[vt]);
		reverse(a+i+1, a+n);
	}
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		for (int &x : a) cin >> x;
		next(a,n);
		for (int x: a) cout << x << " ";
		cout << endl;
	}
}
