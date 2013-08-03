#include <iostream>

using namespace std;

int main() {
    char s[3];
    int n, r=0;
    
    cin >> n;
    while (cin >> s) {
        (s[1] == '+')?r++:r--;
    }
    cout << r;
    return 0;
}
    
