#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long t;
	for (int i = 0; i < n; i++) {
		int count = 0;
		cin >> t;
		while (t != 1) {
			if (t % 2 == 0) {
				t = t / 2;
			}
			else {
				t = t * 3 + 1;
			}
			count++;
		}
		cout << count << endl;
	}
	return 0;
}
