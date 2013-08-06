#include <iostream>

using namespace std;

int main() {
    int n, c;
    cin >> n;
    int arr[n+1];
    
    for (int i = 1; i < n+1; i++) {
        cin >> c;
        arr[c] = i;
    }

    for (int i = 1; i < n+1; i++) cout << arr[i] << " ";

    return 0;
}
