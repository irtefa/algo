#include <iostream>
#include <string.h>

using namespace std;

int main() {
    string s;
    
    cin >> s;

    if (s.find("1111111", 0) == string::npos && s.find("0000000", 0) == string::npos) cout << "NO";
    else cout << "YES";

    return 0;
}
