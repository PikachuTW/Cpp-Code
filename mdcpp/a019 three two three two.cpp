#include<iostream>
using namespace std;

int main() {
	int n;
	int k;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;
		if (k % 2 == 0) {
			cout << "2的倍數";
		}
		else if (k % 3 == 0) {
			cout << "3的倍數";
		}
		else {
			cout << "非2或3的倍數";
		}
		cout << endl;
	}
	return 0;
}
