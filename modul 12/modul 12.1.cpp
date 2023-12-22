#include <stdio.h>

int main() {
    char A[8] = {'J', 'A', 'K', 'A', 'R', 'T', 'A', '\0'};

    printf("Isi Array A: ");
    for (int I = 0; I < 8; I++) {
        printf("%c ", A[I]);
    }

    char input;
    printf("\nMasukkan huruf yang ingin dicek: ");
    scanf(" %c", &input);

    int found = 0;

    for (int i = 0; i < 7; i++) {
        if (A[i] == input) {
            found = 1;
            printf("ADA %c\n", input);
            break;
        }
    }

    if (!found) {
        printf("TIDAK ADA\n");
    }

    return 0;
}
