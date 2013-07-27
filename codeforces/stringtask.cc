#include <iostream>

using namespace std;

int main() {
    char c;
    while (cin >> c) {
        if(!strchr("AEIOUY", toupper(c))) {
          cout << '.' << (char) tolower(c);
        }
   }
    return 0;
}
