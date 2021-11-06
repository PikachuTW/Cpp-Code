#include<iostream>
#include<set>
using namespace std;

int main() {
    int n, m, k;
    int a;

    set<int> s1;
    int c = 0;
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++) {
        cin >> a;
        s1.insert(a);
    }
    for (int i = 0; i < m; i++) {
        cin >> a;
        if (s1.find(k - a) != s1.end()) {
            c++;
        }
    }
    cout << c;
    return 0;
}
