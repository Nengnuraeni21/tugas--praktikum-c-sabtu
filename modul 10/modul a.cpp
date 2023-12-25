#include <iostream>

using namespace std;

int main() {
    int A[5] = {12, 8, 17, 5, 15};
    int B[7] = {5, 11, 7, 25, 9, 12, 14};
    int C[12] = {0};  // Inisialisasi array C dengan 0, ini opsional tergantung kebutuhan

    // Cetak isi array A
    cout << "Isi Array A: ";
    for (int I = 0; I < 5; I++) {
        cout << A[I] << " ";
    }

    // Cetak isi array B
    cout << "\nIsi Array B: ";
    for (int I = 0; I < 7; I++) {
        cout << B[I] << " ";
    }

    int J = 0; // Indeks untuk array C

    // Salin nilai yang lebih besar dari 10 dari array A ke array C
    for (int I = 0; I < 5; I++) {
        if (A[I] > 10) {
            C[J] = A[I];
            J++;
        }
    }

    // Salin nilai yang lebih besar dari 10 dari array B ke array C
    for (int I = 0; I < 7; I++) {
        if (B[I] > 10) {
        C[J] = B[I];
            J++;
        }
    }

    // Cetak isi array C
    cout << "\nIsi Array C: ";
    for (int I = 0; I < J; I++) {
        cout << C[I] << " ";
    }
    
    return 0;
}
