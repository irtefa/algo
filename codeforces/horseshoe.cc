#include <iostream>
using namespace std;

int main() {
    long a, b, c, d;
    int r = 0;
    
    cin >> a >> b >> c >> d;

    if (b == a) r++;
    if (c == a || c == b) r++;
    if (d == a || d == b || d == c) r++;
    
    cout << r;

    return 0;
}
