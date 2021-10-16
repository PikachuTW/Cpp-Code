#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int time[20];
	int num[20];
	int a;
	int yes;
	int count = 0;
	int max = 0;
	int which;
	for (int i = 0; i < N; i++) {
		cin >> a;
		yes = 0;
		for (int p = 0; p < i; p++) {
			if (num[p] == a) {
				time[p]++;
				yes++;
			}
		}
		if (yes == 0) {
			num[count] = a;
			time[count] = 1;
			count++;
		}
	}
	for (int k = 0; k < count; k++) {
		if (time[k] > max) {
			max = time[k];
			which = k;
		}
	}
	cout << num[which] << " " << max;
	return 0;
}
