#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	int n = 1;
	while (cin >> a >> b) {
		if (n == 3) {
			cout << "Explosionn is small" << endl;
		}
		else {
			if (a <= b) {
				cout << "Explosionn is small" << endl;
			}
			else {
				cout << "Explosionn is big" << endl;
			}
		}
		n++;
	}
	return 0;
}
