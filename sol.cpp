#include <bits/stdc++.h>

using namespace std;

void decode() {
	char a[1000];
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int flag = 0;
	for(int i = 0; i < n; ++i) {
		if(a[i] == 'I') flag = 1;
		else if(a[i] == 'Y') flag = 2;
	}
	if(flag == 1) cout << "INDIAN";
	else if(flag == 2) cout << "NOT INDIAN";
	else cout << "NOT SURE";
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
