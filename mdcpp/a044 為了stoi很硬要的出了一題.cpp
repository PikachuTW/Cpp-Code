#include<bits/stdc++.h>
using namespace std;

int main() {
	string n;
	cin >> n;
	if (isdigit(n[0])) {
		cout << stoi(n) + 87;
	}
	else {
		cout << n + "87";
	}
	return 0;
}
