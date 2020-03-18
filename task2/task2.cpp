#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int n, *A, i, k, kf, kl, Af, Al;

    cin >> n;
	A = new int[n];

	for (i=0; i<n; i++){
		cin >> A[i];
	}
	for (i=0; i<n; i++){
		if (A[i]<0){
			Af = A[i];
			kf = i;
			break;
		}
	}
	for (i=0; i<n; i++){
		if (A[i]<0){
			Al = A[i];
			kl = i;
		}
	}
	A[kf] = Al;
	A[kl] = Af;
	for (i=0; i<n; i++){
		cout << A[i] << " ";
	}
}	

