#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    
    (s.size() == 1)? cout << (char) toupper(s[0]):cout << (char) toupper(s[0]) << s.substr(1);
}
