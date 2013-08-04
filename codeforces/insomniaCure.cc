#include <iostream>

using namespace std;

int main() {
    int i, k, l, m, n, d, r = 0;
    
    cin >> k >> l >> m >> n >> d;
    
    for (i=1; i < d+1; i++) {
        if (i%k && i%l && i%m && i%n) r++;
    }
    
    cout << d - r;

    return 0;
}
