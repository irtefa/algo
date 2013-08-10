#include <iostream>
#include <string>

using namespace std;

int main() {
    string m, n;
    cin >> m >> n;

    for (int i = 0; i < m.size(); i++) {
        cout << (m[i] != n[i]);
    }
}
