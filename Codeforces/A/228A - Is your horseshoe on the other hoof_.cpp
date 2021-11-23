#include<bits/stdc++.h>
using namespace std;

int main() {
	int a;
	set<int> k;
	for (int i = 0; i < 4; i++) {
		cin >> a;
		k.insert(a);
	}
	cout << 4 - k.size();
	return 0;
}
