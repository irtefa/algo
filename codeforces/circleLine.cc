#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, c, x, y, i = 0, f = 0, b = 0;
    vector<int> v;
    cin >> n;
    for (; i < n; i++) { cin >> c; v.push_back(c); }
    cin >> x >> y;

    if (x == y) { cout << 0; return 0; }

    i = x - 1;
    while (true) {
        f += v[i];
        i++;
        if (i == n) i = 0;
        if (i == y - 1) break;
    }
    (x - 2 < 0)? i = n - 1: i = x - 2;
    while (true) {
        b += v[i];
        i--;
        if (i < 0) i = n - 1;
        if (i == y - 1) { b+= v[i]; break; }
    }

    cout << min(f, b);
}



