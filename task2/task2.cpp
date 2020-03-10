/*
Ïîìåíÿòü ìåñòàìè ïåðâûé îòðèöàòåëüíûé ñ ïîñëåäíèì îòðèöàòåëüíûì
*/

#include <iostream>

using namespace std;

int main() {
	int n, *A, i, first, last;
    cin >> n;
	A = new int[n];

	for (i=0; i<n; i++){
		cin >> A[i];
		if (A[i]<0) { //...
			//...
		}

	}
	A[first] = A[last]; 
	A[last] = A[first]; // òàê äà ??
	
	for (i=0; i<n; i++){
		cout << A[i];
	}
	return 0;
}	