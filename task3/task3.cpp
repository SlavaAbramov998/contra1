/*
Íàéäèòå ïåðâûé èç ýëåìåíòîâ ìàññèâà, íàèáîëåå îòëè÷àþùèéñÿ îò ñðåäíåãî
*/
#include <stdio.h>

int main(){
	int n, i, maxdiff;
	double sum, *X;
	scanf("%d", &n);
	X = new double[n];
	for (i=0; i<n; i++){
		scanf(" %d", &X[i]);
	
	
	}
	// ...

	printf("%f", X[maxdiff]);
	delete[] X;
	return 0;
}