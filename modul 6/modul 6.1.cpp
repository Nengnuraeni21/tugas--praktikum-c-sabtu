<<<<<<< HEAD
#include <stdio.h>

int main() 
{
    
    for (int i = 1; i <= 10; i++) {
        
        int nilai = i * 10;
        printf("%i ", nilai);
    }

    
    printf("\n");

    return 0;
}
=======
#include <stdio.h>

int main() 
{
    // Menggunakan perulangan for untuk mencetak deret angka
    for (int i = 1; i <= 10; i++) 
	{
        // Menggunakan rumus 100 - (i * 5) untuk mendapatkan nilai yang diinginkan
        int nilai = i * 10;
        printf("%i ", nilai);
    }

    // Baris baru setelah mencetak deret angka
    printf("\n");

    return 0;
}
>>>>>>> f369406 (first commit)
