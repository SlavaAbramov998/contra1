#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	int n, y, *A, i;
	cin >> n;
	A = new int[n];
	for (i = 0; i < n; i++) {
		cin >> A[i];
	}

	cin >> y;
	for (i = 0; i < n; i++) {
		if (A[i] > y || A[i] == y) {
			cout << i;
			break;
		}
	}
}