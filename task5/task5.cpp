#include <iostream>
using namespace std;

int main() {
	int x, y, k, l, n, h, m;
	double* A;
	cin >> n;
	A = new double[n];
	for (int i = 1; i <= n; i++) {
		cin >> A[i];
	}
	cin >> m;

	l = 1;
	k = 1;
	h = n - m;

	if (h == n / 2) {
		for (int i = 1; i <= h; i++) {
			y = A[i];
			x = A[m + k];
			A[i] = x;
			A[m + k] = y;
			k++;
		}
	}
	else {
		for (int i = m; i < n; i++) {
			x = A[i + 1];
			for (int j = m + l; j--;) {
				if (j == l) break;
				y = A[j - 1];
				A[j] = y;
			}
			A[l] = x;
			l++;
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << A[i] << " ";
	}


}
