
#include <iostream>
#include <cstdlib>
#include <cstdlib>
using namespace std;

int main(){
	int i, k, s, n;
	int *A;
	cin >> n;
	A = new int[n];
	for (i = 0; i < n; i++){
		cin >> A[i];
	}
	k = 0;
	s = A[n-1];
	for(i = 0; i < n; i++){
		if (A[i] > s){
			k = k + 1;
		}
	}
	cout << k;

}