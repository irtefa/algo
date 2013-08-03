#include <iostream>

using namespace std;

int main() {
    int n, carry, in, out, cap;
    cap = 0;
    carry = 0;
    cin >> n;
    for(int i=0; i < n; i++) {
        cin >> out >> in;
        carry = carry - out;
        carry += in;
        cap = max(carry, cap);
    }
    cout << cap;
    return 0;
}
