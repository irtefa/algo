#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, i=0;
    int j = 1;
    int r = 0;
    string s;

    cin >> n;
    cin >> s;
    
    while (j < n) {
      if (s[i] == s[j]) {
          j++;
          r++;
      } else {
          i=j;
          j++;
      }
    }
    cout << r;
    return 0;
}
