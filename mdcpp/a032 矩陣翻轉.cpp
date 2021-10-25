#include<iostream>
using namespace std;

int main() {
	int x;
	int y;
	int s[100][100];
	cin >> y >> x;
	for (int i = 0; i < y; i++) {
		for (int p = 0; p < x; p++) {
			cin >> s[p][i];
		}
	}
	for (int i = 0; i < x; i++) {
		for (int p = 0; p < y; p++) {
			cout << s[i][p] << " ";
		}
		cout << endl;
	}
	return 0;
}
