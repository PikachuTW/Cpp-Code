#include<iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		s[i] = s[i] - 7;
	}
	for (char c : s) {
		cout << c;
	}
	return 0;
}
