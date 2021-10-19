#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int k[10];
	int max = 0;
	int when;
	for (int i = 0; i < n; i++) {
		cin >> k[i];
	}
	for (int i = 0; i < n; i++) {
		if (k[i] > max) {
			when = i + 1;
			max = k[i];
		}
	}
	cout << when << " " << max;
	return 0;
}
