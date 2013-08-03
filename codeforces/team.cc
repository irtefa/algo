#include <iostream>

using namespace std;

int main() {
    int n, a, b, c;
    cin >> n;
    int r = 0;
    for (int i=0; i < n; i++) {
      cin >> a >> b >> c;
      if (a + b + c > 1) r++;
    }
    cout << r;
    return 0;
}

