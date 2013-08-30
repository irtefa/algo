#include <iostream>
#include <limits.h>

using namespace std;

int main() {
    int n, k, r = INT_MIN, f, t;
    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        cin >> f >> t;
        (t > k)? r = max(r, f - (t - k)) : r = max(f, r);
    }
    cout << r;
}
