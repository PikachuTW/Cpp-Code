#include<iostream>
using namespace std;

int main() {
	int n, m;
	int k[20];
	cin >> n;
	cin >> m;
	k[0] = m;
	k[1] = m;
	for (int i = 2; i < n; i++) {
		k[i] = k[i - 1] + k[i - 2];
	}
	for (int i = 0; i < n; i++) {
		cout << k[i] << " ";
	}
	return 0;
}
