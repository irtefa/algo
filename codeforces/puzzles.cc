#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n, m, c, i = 0, min_d = 55555;
    vector<int> v;
    cin >> n >> m;

    for (; i < m; i++) { cin >> c; v.push_back(c); }
    sort(v.begin(), v.end());

    for (i = 0; i + n - 1< v.size(); i++) {
        if (v[i + n - 1] - v[i] < min_d) min_d = v[i + n - 1] - v[i]; 
    }
    cout << min_d;
}
