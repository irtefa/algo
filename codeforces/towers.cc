#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    int n, c;
    set<int> s;
    int a[1001] = {0};
    cin >> n;
    for (int i = 0; i < n; i++) { cin >> c; s.insert(c); a[c]+=1;}
    sort(a, a + 1001);
    cout << a[1000] << ' ' << s.size();
}
    
