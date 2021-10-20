#include <iostream>
using namespace std;

int main() {
	int num;
	int save[100000];
	int rank[100000];
	int count = 0;
	cin >> num;
	for (int t = 2; num != 1; t++) {
		rank[count] = 0;
		if (num % t == 0) {
			while (num % t == 0) {
				if (save[count] != t) {
					save[count] = t;
					rank[count] = 1;
				}
				else {
					rank[count]++;
				}
				num = num / t;
			}
			count++;
		}
	}
	for (int p = 0; p < count; p++) {
		if (rank[p] == 1) {
			if (p == count - 1) {
				cout << save[p] ;
			}
			else {
				cout << save[p] << " * ";
			}
		}
		else {
			if (p == count - 1) {
				cout << save[p] << "^" << rank[p];
			}
			else {
				cout << save[p] << "^" << rank[p] << " * ";
			}
		}
	}
	return 0;
}
