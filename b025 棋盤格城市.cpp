#include <iostream>
using namespace std;

int main() {
	long long int t[34][34];
	int x, y;
	cin >> x >> y;
	for (int i = 0; i <= 33; i++) {
		t[i][0] = 1;
	}
	for (int i = 0; i <= 33; i++) {
		t[0][i] = 1;
	}
	for (int p = 1; p <= x; p++) {
		for (int k = 1; k <= y; k++) {
			t[p][k] = t[p - 1][k] + t[p][k - 1];
		}
	}
	cout << t[x][y];
	return 0;
}
