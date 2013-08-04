#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v;
    int n, c, t = 0;
    int f = 0;
    int r = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> c;
        v.push_back(c);
        t += c;
    }

    sort(v.begin(), v.end()); 

    for (int i = v.size() - 1; i > -1; i--) {
        f += v[i];
        r++;
        if (f > (t - f)) break;
    }
    cout << r;

    return 0;
}
