#include<iostream>
using namespace std;

int main() {
	int n;
	int a[10000];
	int k1 = 0;
	int k2 = 0;
	int k3 = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] % 3 == 0) {
			k1++;
		}
		else if (a[i] % 3 == 1) {
			k2++;
		}
		else if (a[i] % 3 == 2) {
			k3++;
		}
	}
	cout << k1 << " " << k2 << " " << k3;
	return 0;
}
