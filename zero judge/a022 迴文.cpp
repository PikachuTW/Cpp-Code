#include<iostream>
using namespace std;

int main() {
	string a;
	cin >> a;
	int check = 1;
	for (int i = 0; i < a.size() / 2; i++) {
		if (a[i] != a[a.size() - i - 1]) {
			check = 0;
		}
	}
	if (check == 1) {
		cout << "yes";
	}
	else {
		cout << "no";
	}
	return 0;
}
