#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int k;
	string a;
	int t[50];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;
		for (int p = 0; p < k; p++) {
			cin >> t[p];
		}
		sort(t, t + k);
		a = "YES";
		for (int p = 1; p < k; p++) {
			if (t[p] - t[p - 1] > 1) {
				a = "NO";
				break;
			}
			else {
				a = "YES";
			}
		}
		cout << a << endl;
	}
	return 0;
}
