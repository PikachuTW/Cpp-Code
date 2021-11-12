#include<bits/stdc++.h>
using namespace std;

string n;
int x;
int y;

int eval() {
	cin >> n;
	if (n[0] == 'f') {
		return 2 * eval() - 1;
	}
	else if (n[0] == 'g') {
		return eval() + 2 * eval() - 3;
	}
	else {
		return stoi(n);
	}
}

int main() {
	cout << eval();
	return 0;
}
