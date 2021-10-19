#include<iostream>
using namespace std;

int main() {
	int a;
	int num, j;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> num >> j;
		for (int i = 1; i <= num; i++) {
			if (i % (j + 1) != 0) {
				cout << i << " ";
			}
		}
		cout << endl;
	}
  return 0;
}
