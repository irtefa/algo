#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int h, m, n, r = 1;
    int c = 1;
    int p_h = -1;
    int p_m = -1;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> h >> m;
        if (p_h == h && p_m == m) c++;
        else c = 1;
        r = max(c, r);
        p_h = h;
        p_m = m;
    }
    cout << r;
}
