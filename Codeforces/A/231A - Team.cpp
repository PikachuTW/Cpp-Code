#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int a, b, c;
	int check = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		if (a + b + c >= 2) {
			check++;
		}
	}
	cout << check;
	return 0;
}
