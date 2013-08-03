#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

int main() {
    int i;
    string w;
    cin >> w;
    for (i=1; i < w.size(); i++) {
        if (islower(w[i])) break;
    }
    if (i == w.size()) {
        if (islower(w[0])) {
          putchar (toupper(w[0]));
        } else {
          putchar (tolower(w[0]));
        }
        for (i=1; i < w.size(); i++) {
            putchar (tolower(w[i]));
        }
        return 0;
    }
    cout << w;
    return 0;
}
