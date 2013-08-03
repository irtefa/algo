#include <iostream>

using namespace std;

int gcd (int a, int b) {
    return (b == 0) ? a : gcd (b, a%b);
}

int main() {
    int a, b, s, t = 0; 
    
    cin >> a >> b >> s;
    int p = a;
    while(true) {
        if (gcd (p, s) > s) {
            if (t == 0) cout << 1;
            else cout << 0;
            return 0;
        }
        s -= gcd (p, s);
        if (t == 1) { 
            t = 0;
            p = a;
        } else {
            t = 1;
            p = b;
        }
    }
    return 0;
}
