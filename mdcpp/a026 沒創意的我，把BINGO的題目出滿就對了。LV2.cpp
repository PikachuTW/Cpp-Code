#include<iostream>
using namespace std;

int main() {
	int k;
	cin >> k;
	int a[100][100];
	for (int i = 0; i < k; i++) {
		for (int p = 0; p < k; p++) {
			cin >> a[i][p];
		}
	}
	for (int i = 0; i < k; i++) {
		for (int p = 0; p < k; p++) {
			cout << a[i][p] << " ";
		}
		cout << endl;
	}
}
