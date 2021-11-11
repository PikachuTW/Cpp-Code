#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long list[50];
	list[0] = 1;
	list[1] = 2;
	for (int i = 2; i < 50; i++) {
		list[i] = list[i - 1] + list[i - 2];
	}
	cout << list[n - 1];
	return 0;
}
