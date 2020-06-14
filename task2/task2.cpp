#include <iostream>

using namespace std;

int main() {
	int* a, i = 0, j;
	a = new int[100];
	cin >> a[i];
	while (a[i] != -1) {
		i++;
		cin >> a[i];
	}
	for (j = 0; j < i + 1; j++)
		if (a[j] > 0 && a[j] % 2 == 0)
			cout << a[j] << " ";
}
