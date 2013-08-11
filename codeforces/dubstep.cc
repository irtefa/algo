#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t = "";
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (i+2 < s.size() && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            if (t != "") { cout << t << " ";}
            t = "";
            i += 2;
        } else {
            t += s[i];
            if (i == s.size() - 1) cout << t;
        }
    }
}
