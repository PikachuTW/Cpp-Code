#include<bits/stdc++.h>
using namespace std;

int main() {
	char a;
	cin >> a;
	if (int(a) >= 97) {
		a = a - 32;
		cout << a;
	}
	else {
		a = a + 32;
		cout << a;
	}
	return 0;
}
