#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int n = 0;

    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '4' || s[i] == '7') n++;
    }
    cout << (n == 7 || n == 4? "YES": "NO")<< endl;
    
    return 0;
}
