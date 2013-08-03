#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, i=0;
    int r = 0;
    string s;

    cin >> n;
    cin >> s;
    
    for (i = 1; i < n; i++) {
        r += (s[i] == s[i-1]);
    }

    cout << r;
    return 0;
}
