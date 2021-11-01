#include<iostream>
using namespace std;

int main() {
	int a[31];
	a[1] = 1;
	a[2] = 2;
	for (int i = 3; i <= 30; i++) {
		a[i] = a[i - 1] + a[i - 2];
	}
	int n;
	int k;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;
		cout << a[k] << endl;
	}
	return 0;
}
