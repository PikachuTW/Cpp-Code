#include<iostream>
using namespace std;

int main() {
	int a;
	while (cin >> a) {
		if (a <= 10) {
			cout << 6 * a;
		}
		else if (a <= 20) {
			cout << 60 + 2 * (a - 10);
		}
		else if (a <= 40) {
			cout << 80 + (a - 20);
		}
		else {
			cout << 100;
		}
		cout << endl;
	}
	return 0;
}
