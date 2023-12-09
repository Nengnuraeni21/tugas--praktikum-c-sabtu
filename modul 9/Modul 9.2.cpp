#include <stdio.h>
#include <iostream>

int main() {
	char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
	char input;
	int count = 0;
	
	printf ("Masukan bilangan integer: ");
	scanf ("%c", &input);
	
	for (int i = 0; i<10; i++) {
		if (A[i] == input) {
			count++;
		}
	}
	if (count > 0) {
		printf("ADA\n");
		printf("%d karakter", count, input);
	} else {
		printf("TIDAK ADA\n");
	}
	
	return 0;
}
