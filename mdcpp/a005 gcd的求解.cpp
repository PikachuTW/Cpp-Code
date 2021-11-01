#include<iostream>
using namespace std;

int main() {
	int a;
	int b;
	cin >> a;
	cin >> b;
	while (true) {
		if (a >= b) {
			a = a % b;
			if (a == 0) {
				cout << b;
				break;
			}
		}
		else {
			b = b % a;
			if (b == 0) {
				cout << a;
				break;
			}
		}
	}
	return 0;
}
