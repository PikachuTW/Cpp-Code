#include<iostream>
using namespace std;

int main() {
	int a[100][100];
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int p = 0; p < m; p++) {
			cin >> a[i][p];
		}
	}
	for (int i = 1; i < n; i++) {
		for (int p = 0; p < m; p++) {
			a[i][p] += a[i - 1][p];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int p = 0; p < m; p++) {
			cout << a[i][p] << " ";
		}
		cout << endl;
	}
	return 0;
}
