#include <iostream>

using namespace std;

int main() {
	float a, b;
	cin >> a >> b;
	if (a < 0)
		cout << "x > " << a / b;
	if (a > 0)
		cout << "x < " << a / b;
}
