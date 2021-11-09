#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int k;
	int c = 0;
	for (int i = 0; i < 3; i++) {
		cin >> n;
		k = (n + 108 * n * n * n * n * n + 108) * 37;
		if (k % 2 == 0) {
			c++;
		}
	}
	cout << c;
	return 0;
}
