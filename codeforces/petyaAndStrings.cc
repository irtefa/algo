#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char s[100], t[100];
    cin >> s;
    cin >> t;
    cout << stricmp(s, t);
    return 0;
}
