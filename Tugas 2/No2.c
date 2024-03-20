#include <stdio.h>

int main() {
    int Hari;
    
    // Baca nomor hari dari masukan keyboard

    printf("masukkan nomor hari :");
    scanf("%d", &Hari);

       // memvalidasi masukkan nomor hari
     {
          if (Hari <1 || Hari >7) {
            printf("masukkan nomor hari tidak tepat");
        } 

       // Tampilan nama hari sesuai nomor hari yang dimasukkan 

          else if (Hari == 1) {
            printf("Senin");
        } else if (Hari == 2) {
            printf("Selasa");
        } else if (Hari == 3) {
            printf("Rabu");
        } else if (Hari == 4) {
            printf("Kamis");
        } else if (Hari == 5) {
            printf("Jum'at");
        } else if (Hari == 6) {
            printf("Sabtu");
        } else if (Hari == 7) {
            printf("Ahad");
        }
       
     }

    return 0;
}
