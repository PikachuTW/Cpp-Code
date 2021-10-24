#include<iostream>
#include<math.h>
using namespace std;

int s(int k) {
	int c = 0;
	while (k != 0) {
		k /= 10;
		c++;
	}
	return c;
}

int main() {
	int n, m;
	int total;
	int t;
	int q = 0;
	cin >> n >> m;
	for (int i = n; i <= m; i++) {
		total = 0;
		t = i;
		while (t != 0) {
			total += pow((t % 10), s(i));
			t /= 10;
		}
		if (total == i) {
			cout << total << " ";
			q++;
		}
	}
	if (q == 0) {
		cout << "none";
	}
	return 0;
}
