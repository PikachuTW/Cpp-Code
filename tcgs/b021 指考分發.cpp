#include <iostream>
using namespace std;

void swap(int* n1, int* n2) {
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

int main() {
	int n;
	int a1, a2, a3, a4, a5;
	int k;
	cin >> n;
	int t[100][3];
	for (int i = 0; i < n; i++) {
		cin >> k >> a1 >> a2 >> a3 >> a4 >> a5;
		t[i][0] = k;
		t[i][1] = a1 + a2 + a3 + a4 + a5;
		t[i][2] = a3;
	}
	for (int i = 0; i < n; i++) {
		for (int p = 0; p < n - i - 1; p++) {
			if (t[p][1] > t[p + 1][1]) {
				swap(&t[p][0], &t[p + 1][0]);
				swap(&t[p][1], &t[p + 1][1]);
				swap(&t[p][2], &t[p + 1][2]);
			}
			else if (t[p][1] == t[p + 1][1]) {
				if (t[p][2] > t[p + 1][2]) {
					swap(&t[p][0], &t[p + 1][0]);
					swap(&t[p][1], &t[p + 1][1]);
					swap(&t[p][2], &t[p + 1][2]);
				}
			}
		}
	}
	for (int i = n - 1; i >= 0; i--) {
		cout << t[i][0] << endl;
	}
	return 0;
}
