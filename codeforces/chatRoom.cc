#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    int j = 0;
    char t[] = {'h', 'e', 'l', 'l', 'o', 'z'};
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (t[j] == 'z') {
            cout << "YES";
            return 0;
        }
        if (s[i] == t[j]) j++;
    }
    if (t[j] == 'z') {
        cout << "YES";
    } else cout << "NO";
}
