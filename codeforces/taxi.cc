#include <iostream>

using namespace std;

int main() {
    int n, t, a[5];
    cin >> n;
    while (cin >> t) {
        a[t]++;
    }
    a[1] = max(a[1] - a[3], 0);
    cout << a[3] + a[4] + (a[1] + 2*a[2] + 3)/4;
    return 0;
}

