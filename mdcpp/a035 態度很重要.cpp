#include<bits/stdc++.h>
using namespace std;

int main() {
	char a[20];
	int n = 0;
	cin >> a;
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] >= 97) {
			n += a[i] - 96;
		}
		else {
			n += a[i] - 64;
		}
	}
	cout << n;
	return 0;
}
