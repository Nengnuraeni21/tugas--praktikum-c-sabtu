<<<<<<< HEAD
#include <stdio.h>

int main() {
    // Jumlah awal uang yang disimpan
    double saldoAwal = 1000000.0;

    // Suku bunga/bulan (dalam desimal)
    double sukuBunga = 0.02;

    // Jumlah bulan
    int jumlahBulan = 10;

    // Menghitung jumlah uang setelah 10 bulan
    for (int i = 1; i <= jumlahBulan; i++) 
	{
        saldoAwal = saldoAwal + (saldoAwal * sukuBunga);
    }

    // Menampilkan jumlah uang setelah 10 bulan
    
    printf("Jumlah uang setelah %i bulan,", jumlahBulan);
    printf(" adalah Rp. %.1f\n", saldoAwal);

    return 0;
}

=======
#include <stdio.h>

int main() {
    // Saldo awal
    double saldo = 1000000;

    // Bunga per bulan (2%)
    double bunga = 0.02;

    // Menghitung saldo setelah 10 bulan
    for (int bulan = 1; bulan <= 10; bulan++) 
	{
        saldo = saldo + (saldo * bunga);
    }

    // Menampilkan hasil
    printf("Saldo setelah 10 bulan: Rp %.2lf\n", saldo);

    return 0;
}
>>>>>>> f369406 (first commit)
