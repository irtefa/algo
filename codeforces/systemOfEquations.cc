#include <iostream>

using namespace std;

int main() {
    int n, m;
    long long c = 0;
    cin >> n >> m;

    for (int i = 0; i < 1001; i++) {
        if (i * i > n) break;
        for (int j = 0; j < 1001; j++) {
            if (j * j > m) break;

            if ((((i*i) + j) == n) && ((i + (j*j)) == m)) c++;
        }
    }
    cout << c;
}
