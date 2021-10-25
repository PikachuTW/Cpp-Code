#include<iostream>
using namespace std;

int main() {
	int n;
	int k[10];
	int a;
	int more = 0;
	int less = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k[i];
	}
	cin >> a;
	for (int i = 0; i < n; i++) {
		if (k[i] > a) {
			more++;
		}
		else if (k[i] < a) {
			less++;
		}
	}
	cout << more << " " << less;
	return 0;
}
