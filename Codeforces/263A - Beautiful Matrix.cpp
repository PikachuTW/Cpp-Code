#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int x, y;
	int k;
	int t = 0;
	for (int i = 1; i <= 25; i++) {
		cin >> n;
		if (n == 1) {
			k = i;
		}
	}
	x = k % 5;
	y = k / 5 + 1;
	if (x == 0) {
		y--;
		x = 5;
	}
	if (x >= 3) {
		t += x - 3;
	}
	else {
		t += 3 - x;
	}
	if (y >= 3) {
		t += y - 3;
	}
	else {
		t += 3 - y;
	}
	cout << t;
	return 0;
}
