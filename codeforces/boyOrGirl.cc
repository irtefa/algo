#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    set<char> t;
    string s;
    
    cin >> s;

    for (int i = 0; i < s.size(); i++) { t.insert(s[i]); }

    (t.size() % 2)? cout << "IGNORE HIM!": cout << "CHAT WITH HER!";
}
