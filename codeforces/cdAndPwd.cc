#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    string s, t;
    vector<string> v;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s;
        if (s == "pwd") {
            for (int i = 0; i < v.size(); i++) {
                cout << "/" << v[i];
            }
            cout << "/" << endl;
        }
        else {
            cin >> s;
            int i = 0;
            if (s[0] == '/') {
                v.clear();
                i = 1;
            }
            for (; i < s.size(); i++) {
                t = "";
                for (; s[i] != '/' && i < s.size(); i++) { t += s[i]; }
                
                if (t == "..") v.pop_back();
                else v.push_back(t);
            }
        }
    }
}
