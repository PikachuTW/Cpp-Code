#include<iostream>
using namespace std;

int main() {
	int n;
	string k;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;
		if (k.size() > 10) {
			cout << k[0] << k.size() - 2 << k[k.size() - 1] << endl;
		}
		else {
			cout << k;
		}
	}
	return 0;
}
