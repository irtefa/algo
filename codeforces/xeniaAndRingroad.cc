#include <iostream>

using namespace std;

int main() {
    int n, m, c, k, s = 1;
    long long t = 0;
    cin >> n >> m;


    while (cin >> c) {
        if (c >= s) {
            t += c - s;
            s = c;
        } else {
            k = s - c;
            t += n - k;
            s = c;
        }
    }
    cout << t;
}
