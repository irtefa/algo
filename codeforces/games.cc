#include <iostream>

using namespace std;

int main() {
    int n, h, a, r = 0;
    int ah[101];
    int aa[101];
    fill_n(ah, 101, 0);
    fill_n(aa, 101, 0);
    
    cin >> n;

    while (cin >> h >> a) {
        ah[h]++;
        aa[a]++;
    }

   for (int i = 0; i < 101; i++) {
       r += ah[i] * aa[i];
   }

   cout << r;
}
