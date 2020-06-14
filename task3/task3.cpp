#include <iostream>

using namespace std;

int main() {
	int* a, i, max = 0, n, k = 0;
	cin >> n;
	a = new int[n];
	for (i = 0; i < n; i++)
		cin >> a[i];
	for (i = 1; i < n; i++)
		if (a[i] < a[i - 1])
			k++;
		else {
			if (max < k)
				max = k;
			k = 0;
		}
	if (k > max)
		cout << k + 1;
	else
		if (max == 0)
			cout << "0";
		else
			cout << max + 1;
}
