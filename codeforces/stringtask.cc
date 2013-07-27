#include <stdio.h>
#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    for(int i=0; i < s.size(); i++) {
        if(s[i] == 'A' || s[i] == 'a' || s[i] == 'e' || s[i] == 'E' || s[i] == 'I' || s[i] == 'i' || s[i] == 'o' || s[i] == 'O' || s[i] == 'U' || s[i] == 'u' || s[i] == 'Y' || s[i] == 'y');
        else {
            char c = s[i];
            putchar ('.');
            putchar (tolower(c));
        }
    }
    return 0;
}
