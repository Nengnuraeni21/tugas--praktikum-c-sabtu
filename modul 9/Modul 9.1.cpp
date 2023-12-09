#include <stdio.h>

int main() {
	int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
	int N;
	int found = 0;
	
	printf("Masukan bilangan integer = ");
	scanf("%d", &N);
	
	printf("12 17 10 5 15 25 11 7 25 16 19\n");
	
	printf ("ADA\nLokasi bilangan yang sama :\n ");
	for (int i = 0; i < 11; i++) {
		if (A[i] == N) {
			printf("%d ", i);
			found = 1;
		}
	}
	if (!found) {
		printf("TIDAK ADA\n");
	}
	
	return 0;
}
