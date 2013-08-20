#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    if (s.size() != t.size()) { cout << "NO"; return 0; }
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] != t[n - i - 1]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
