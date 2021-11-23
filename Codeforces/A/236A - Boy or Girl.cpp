#include<bits/stdc++.h>
using namespace std;

int main() {
	string a;
	int check = 0;
	cin >> a;
	for (int i = 0; i < a.size(); i++) {
		int num = 0;
		for (int p = 0; p < i; p++) {
			if (a[i] == a[p]) {
				num++;
			}
		}
		if (num == 0) {
			check++;
		}
	}
	if (check % 2 == 0) {
		cout << "CHAT WITH HER!";
	}
	else {
		cout << "IGNORE HIM!";
	}
	return 0;
}
