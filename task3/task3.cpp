#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	int n, i;
	double sum, * X, r, c, max;
	cin >> n;
	X = new double[n];

	for (i = 0; i < n; i++) {
		cin >> X[i];
	}
	sum = 0;
	for (i = 0; i < n; i++) {
		sum = sum + X[i];
	}

	r = sum / n;
	max = 0;
	for (i = 0; i < n; i++) {
		if (abs(r - X[i]) > max) {
			max = abs(r - X[i]);
			c = X[i];

		}
	}
	cout << c;
}
