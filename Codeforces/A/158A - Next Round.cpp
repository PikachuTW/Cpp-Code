#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int k;
	int list[100];
	int check = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> list[i];
	}
	for (int i = 0; i < n; i++) {
		if (list[i] >= list[k - 1] && list[i] > 0) {
			check++;
		}
	}
	cout << check;
	return 0;
}
