#include<iostream>
#include <string>
using namespace std;

string n;
int eval() {
	int final = 0;
	cin >> n;
	if (n[0] == 'f') {
		final = 2 * eval() - 1;
	}
	else if (n[0] == 'g') {
		final = eval() + 2 * eval() - 3;
	}
	else {
		final = stoi(n);
	}
	return final;

}

int main() {
	cout << eval();
	return 0;
}
