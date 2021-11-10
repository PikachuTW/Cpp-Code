#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string k;
	string p[9];
	cin >> n;
	cin >> k;
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	for (int i = 0; i < n; i++) {
		cout << p[k[i] - '1'];
	}
	return 0;
}
