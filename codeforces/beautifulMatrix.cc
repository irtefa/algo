#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, i, j;

    for (j = 1; j < 6; j++) {
        for (i = 1; i < 6; i++) {
            cin >> n;
            if (n) { cout << abs(j - 3) + abs(i - 3);}
        }
    }
}
