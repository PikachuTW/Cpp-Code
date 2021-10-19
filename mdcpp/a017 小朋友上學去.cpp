#include<iostream>
using namespace std;

int main() {
	int a, b;
	cin >> b >> a;
	int time = a / b;
	int left = a % b;
	for (int i = 0; i < time; i++) {
		for (int p = 1; p <= b; p++) {
			cout << p << " ";
		}
	}
	for (int i = 1; i <= left; i++) {
		cout << i << " ";
	}
  return 0;
}
