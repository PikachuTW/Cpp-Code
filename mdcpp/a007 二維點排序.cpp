#include<iostream>
using namespace std;

void swap(int *c1, int *c2) {
	int temp = *c1;
	*c1 = *c2;
	*c2 = temp;
}

int main() {
	int n;
	cin >> n;
	int t[100][2];
	for (int i = 0; i < n; i++) {
		cin >> t[i][0];
		cin >> t[i][1];
	}
	for (int i = 0; i < n; i++) {
		for (int p = 0; p < n - i - 1; p++) {
			if (t[p][0] > t[p + 1][0]) {
				swap(&t[p][0], &t[p + 1][0]);
				swap(&t[p][1], &t[p + 1][1]);
			}
			else if (t[p][0] == t[p + 1][0]) {
				if (t[p][1] < t[p + 1][1]) {
					swap(&t[p][0], &t[p + 1][0]);
					swap(&t[p][1], &t[p + 1][1]);
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << t[i][0] << " " << t[i][1] << endl;
	}
}
