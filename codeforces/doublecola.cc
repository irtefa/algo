#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main() {
    int n,p;
    string a[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    cin >> n;
    n--;
    p = 0;
    while(pow(2,p) * 5 <= n) {
        n -= pow(2,p) * 5;
        p++;
    }
    n /= pow(2,p);
    cout << a[n];
    return 0;
}
