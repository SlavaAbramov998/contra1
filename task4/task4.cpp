#include <iostream>
#include <string>
using namespace std;

int main(){
	int n, y, z, f;
	double max, x, c, *A;

	cin >> n;
	A = new double[n];
	for (int i = 1; i <= n; i++) {
		cin >> A[i];
	}

	max = A[0];
	for (int i = 1; i <= n; i++) {
		if (max < A[i]) {
			max = A[i];
		}
	}
	y = 1;
	z = 1;
	cin >> x;
	for (int i = 1; i <= n; i++) {
		if (max < x) break;
		f = i + 1;
		z = 1;
		while (A[f] >= x) {
			z++;
			f++;
		}
		if (z + i == n + 1) break;
		c = A[i + z];
		for (int c = f; c >= i; c--) {
			A[c] = A[c - 1];
		}
		A[i] = c;
		y++;
	}
	for (int i = 1; i <= n; i++) {
		cout << A[i];
	}
}