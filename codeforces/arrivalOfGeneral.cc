#include <iostream>
using namespace std;

int main() {
    int n, maxi, mini, c;
    int max = -1;
    int min = 101;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> c;
        if (c > max) {
            if (max != -1 && max < min) {
                min = max;
                mini = maxi;
            }
            max = c;
            maxi = i;
        } else if (c <= min) {
            min = c;
            mini = i;
        }
    }

    if (max == min) { cout << 0; return 0;}
    
    cout << maxi + (n - 1 - mini) - (mini < maxi);
    return 0;
}




