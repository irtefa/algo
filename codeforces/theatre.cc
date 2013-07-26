#include <stdio.h>
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    double n, m, a;

    cin >> n >> m >> a;

    double n_a = ceil((n + 0.0f)/a);
    double m_a = ceil((m + 0.0f)/a);
    
    cout << fixed << setprecision(0) << (n_a * m_a) << endl;

    return 0;
}
