#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    int p;
    int r = 0;
    vector<int> l;
    while (cin >> p) {
        l.push_back(p);
    }
    int q = l[t-1];
    for (int i=0; i < l.size(); i++) {
        if (l[i] > 0 && l[i] >= q) {
            r++;
        }
    }
    cout << r << endl;
    return 0;
}
