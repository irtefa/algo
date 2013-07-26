#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  while(n > 0) {
        string  p;
        cin >> p; 
        if (p.size() > 10) {
            cout << p.at(0) << p.size() - 2 << p.at(p.size() - 1) << endl;
        } else {
            cout << p << endl;
        }
        n--;
  }
  return 0;
}

