#include <iostream>

using namespace std;

int main() {
	int n, j, i = 1;
	cin >> n; 
	j = n * n;

	for (int a = 0; a < n; a++) {
		for (int b = 0; b < n/2; b++) {
			cout << i << " ";
			i++;
		}
		for (int b = 0; b < n/2; b++) {
			cout << j << " ";
			j--;
		}
		cout << '\n';
	}
}