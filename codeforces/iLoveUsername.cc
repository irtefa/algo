#include <iostream>

using namespace std;

int main() {
    int mx, mn, n, f, r = 0;
    cin >> n >> f;
    mx = f;
    mn = f;

    for (int i = 1; i < n; i++) {
        cin >> f;
        if (f < mn) {
            r++;
            mn = f;
        }
        else if (f > mx) {
            r++;
            mx = f;
        }
    }
    cout << r;
}

