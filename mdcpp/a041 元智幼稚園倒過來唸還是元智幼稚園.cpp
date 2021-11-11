#include<bits/stdc++.h>
using namespace std;

int main() {
	string n;
	int check = 0;
	cin >> n;
	for (int i = 0; i < n.size() / 2; i++) {
		if (n[i] != n[n.size() - i - 1]) {
			check++;
		}
	}
	if (check == 0) {
		cout << "Y";
	}
	else {
		cout << "N";
	}
	return 0;
}
