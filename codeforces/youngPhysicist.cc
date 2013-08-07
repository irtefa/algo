#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int n, i, j, k;
    int x = 0;
    int y = 0;
    int z = 0;

    cin >> n;

    for (int m = 0; m < n; m++) {
        cin >> i >> j >> k;
        x += i;
        y += j;
        z += k;
    }

    (x == 0 && y == 0 && z == 0)? cout << "YES": cout << "NO";
}
