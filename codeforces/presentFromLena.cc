#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n*2 + 1; i++) {
        for (int j = 0; j < abs(i - n); j++) { cout << "  "; }
        for (int j = 0; j < n - abs(i - n); j++) { cout << j << " "; }
        for (int j = 0; j < n - abs(i - n); j++) { cout << n - abs(i - n) - j << " "; }
        cout << "0" << endl;
    }       
}
