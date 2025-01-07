#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void tebak_angka() {
    int angka_rahasia, tebakan, percobaan = 0, max_percobaan = 5;

    
    srand(time(NULL));
    angka_rahasia = rand() % 10 + 1; 

    printf("=== Permainan Tebak Angka ===\n");
    printf("Angka random udah dipilih antara 1 sampe 10.\n");
    printf("Coba tebak, maksimal %d percobaan!\n\n", max_percobaan);

   
    while (percobaan < max_percobaan) {
        printf("Masukin tebakan: ");
        scanf("%d", &tebakan);

        percobaan++;

        if (tebakan == angka_rahasia) {
            printf("\nGacor wak, berhasil nebak angka %d dalam %d percobaan!\n", angka_rahasia, percobaan);
            return;
        } else if (tebakan > angka_rahasia) {
            printf("Kegedean.\n");
        } else {
            printf("Kekecilan.\n");
        }

        printf("Sisa percobaan: %d\n\n", max_percobaan - percobaan);
    }

    
    printf("\nSalah semua awoakwoakwo.\n");
    printf("Angka sebenarnya: %d\n", angka_rahasia);
}

int main() {
    
    tebak_angka();
    return 0;
}
