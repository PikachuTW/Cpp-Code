#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int c = 0;
	cin >> n;
	string k;
	for (int i = 0; i < n; i++) {
		cin >> k;
		for (int i = 0; i < 3; i++) {
			if (k[i] == '+') {
				c++;
				break;
			}
			else if (k[i] == '-') {
				c--;
				break;
			}
		}
	}
	cout << c;
}
