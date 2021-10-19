#include<iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		for (int p = 1; p <= i; p++) {
			cout << i;
		}
		cout << endl;
	}
	for (int i = a - 1; i >= 0; i--) {
		for (int p = a - 1; p >= a-i ; p--) {
			cout << i;
		}
		cout << endl;
	}
	return 0;
}
