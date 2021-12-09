#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int max = 0;
	int min = 10000;
	int count = 0;
	int k[1000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k[i];
		if (i == 0) {
			max = k[i];
			min = k[i];
		}
		else {
			if (k[i] > max) {
				max = k[i];
				count++;
			}
			if (k[i] < min) {
				min = k[i];
				count++;
			}
		}
	}
	cout << count;
	return 0;
}
