#include<iostream>
using namespace std;

int main() {
	int a;
	int i = 0;
	int total = 0;
	while (total < 450) {
		cin >> a;
		total = total + a;
		i++;
	}
	cout << i;
}
