#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s, t, c, m = "";
    
    cin >> s >> t >> c;
    m = s + t;

    sort(m.begin(), m.end());
    sort(c.begin(), c.end());

    (m == c)? cout << "YES": cout << "NO";
}

    
