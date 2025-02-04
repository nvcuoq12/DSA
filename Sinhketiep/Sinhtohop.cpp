#include <bits/stdc++.h>
using namespace std;
bool continues = true;
void khoitao(int a[], int k){
	for (int j=1; j<=k; j++){
		a[j-1]=j;
	}
}
void next(int a[], int n, int k){
	int i=k-1;
	while (a[i] == n-k+i+1 && i>=0){
		i--;
	}
	if (i<0) {
		continues = false;
	} else {
		a[i]++;
		for (int j= i+1; j<k; j++){
			a[j]=a[j-1]+1;
		}
	}

}
void display (int a[], int k){
	for (int i=0; i<k; i++) cout << a[i];
	cout << " ";
}
int main(){
	int t;
	cin >>t ;
	while (t--){
		int n, k;
		cin >> n >> k;
		int a[k];
		khoitao(a,k);
		continues = true;
		while(continues){
			display(a,k);
			next(a,n,k);
		}
		cout << endl;
	}
} 
