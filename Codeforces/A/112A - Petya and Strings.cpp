#include<bits/stdc++.h>
using namespace std;

int main() {
	string a, b;
	int save1, save2;
	int check = 0;
	cin >> a >> b;
	for (int i = 0; i < a.size(); i++) {
		save1 = (int)a[i];
		save2 = (int)b[i];
		if (save1 < 97) {
			save1 += 32;
		}
		if (save2 < 97) {
			save2 += 32;
		}
		if (save1 < save2) {
			check = -1;
			break;
		}
		else if (save1 > save2) {
			check = 1;
			break;
		}
	}
	cout << check;
	return 0;
}
