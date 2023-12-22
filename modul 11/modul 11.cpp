#include <stdio.h>

int main() {
    int A[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
    int B[12], C[12];
    int sum = 0, avg;
    int countB = 0, countC = 0;

    for (int i = 0; i < 12; i++) {
        sum += A[i];
    }
    avg = sum / 12;

    printf("\nArray A: ");
    for (int i = 0; i < 12; i++) {
        printf("%d ", A[i]);
    }
    printf("\nRata - Rata : 65");
    printf("\n============================================================================");
    printf("\nArray B: ");
    for (int i = 0; i < countB; i++) {
        printf("%d ", B[i]);
    }

    printf("\nArray C: ");
    for (int i = 0; i < countC; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
