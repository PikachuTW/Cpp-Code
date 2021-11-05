#include<iostream>
using namespace std;

int main() {
	int a[3][3];
	for (int i = 0; i < 3; i++) {
		for (int p = 0; p < 3; p++) {
			cin >> a[i][p];
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int p = 0; p < 3; p++) {
			cout << a[i][p];
			if (p != 2) {
				cout << " ";
			}
		}
		cout << endl;
	}
}
