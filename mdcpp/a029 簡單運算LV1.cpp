#include<iostream>
using namespace std;

int main() {
	int a[9];
	for (int i = 0; i < 9; i++) {
		cin >> a[i];
	}
	for (int i = 8; i > 5; i--) {
		a[i] += a[i - 3] + a[i - 6];
	}
	for (int i = 5; i > 2; i--) {
		a[i] += a[i - 3];
	}
	for (int i = 0; i < 9; i++) {
		cout << a[i] << " ";
		if (i % 3 == 2) {
			cout << endl;
		}
	}
	return 0;
}
