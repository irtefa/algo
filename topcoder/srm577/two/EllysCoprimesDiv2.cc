#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class EllysCoprimesDiv2 {
    public:
        int getCount(vector <int>);
};

int gcd(int a, int b) {
    if (a == 0) {
        return b;
    }
    else {
        return gcd(b % a, a);
    }
}

int EllysCoprimesDiv2::getCount(vector <int> n) {
    sort(n.begin(), n.end());
    int ret = 0;

    for(int i = 1; i < n.size(); i++) {
        bool flag = false;
        
        if (gcd(n[i-1], n[i]) != 1) {
            for (int j = n[i-1] + 1; j < n[i]; j++) {
                if (gcd(n[i-1], j) == 1) {
                    if (gcd(n[i], j) == 1 ) {
                        flag = true;
                        break;
                    }
                }
            }
            if (flag) {
                ret++;
            } else {
                ret +=2;
            }
        }
    }
}
