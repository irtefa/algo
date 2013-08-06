#include <iostream>
#include <set>
#include <stdlib.h>

using namespace std;

int main() {
  char a[4];
  cin >> a;
  int i = atoi(a) + 1;
  itoa(i, a, 10);
  while (true) {
    set<char> t (a, a + 4);
    if ((t.size() - 4) == 0) {
        cout << a;
        return 0;
    }
    i = atoi(a) + 1;
    itoa(i, a, 10);
  }
}
    
