#include <iostream>

using namespace std;

int main() {
    int a, n, f = 1;
    int t = 0;

    cin >> n;

    if (n < 2) {
        cout << 0;
        return 0;
    }

    for (int i = 2; i < n; i++) {
        a = f;
        f += t;
        t = a;
    }
    cout << f;
}
