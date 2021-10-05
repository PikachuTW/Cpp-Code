#include<iostream>
using namespace std;

int main() {
	int a;
	int t1 = 0;
	int t2 = 0;
	int p = 0;
	cin >> a;
	while (a != 0) {
		if (p % 2 == 0) {
			t1 = t1 + a % 10;
		}
		else {
			t2 = t2 + a % 10;
		}
		a = a / 10;
		p++;
	}
	if (t1 >= t2) {
		cout << t1 - t2 << endl;
	}
	else {
		cout << t2 - t1 << endl;
	}
}