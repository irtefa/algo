#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int i, n, m, t = 0;
    vector<int> v;
    cin >> n;

    for (i = 0; i < 12; i++) {
        cin >> m;
        v.push_back(m);
    }
    sort(v.rbegin(), v.rend());

    for (i = 0; i < v.size(); i++) {
        if (t >= n) { cout << i; return 0; }
        t += v[i];
    }
    if (t >= n) cout << i;
    else cout << -1;
}
