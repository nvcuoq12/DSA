#include <bits/stdc++.h>
using namespace std;
void next (string& s){
	int i = s.length() - 1;
	while (s[i] == '1' && i>=0) {
		s[i]='0';
		i--; 
	}
	if (i>=0) s[i]='1'; 
}
int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		next (s);
		cout << s << endl;
	}
}
