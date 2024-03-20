#include <stdio.h>

int main() {

    //kamus

    int Bulan;

    //Algoritma

    printf("masukkan nomor bulan: ");
    scanf("%d", &Bulan);

      // Validasi masukkan nomor bulan
     {
          if (Bulan <1 || Bulan >12) {
            printf("masukkan nomor bulan tidak tepat");
        } 

       // Tampilan nama bulan sesuai nomor bulan yang dimasukkan 

          else if (Bulan == 1) {
            printf("Januari");
        } else if (Bulan == 2) {
            printf("Februari");
        } else if (Bulan == 3) {
            printf("Maret");
        } else if (Bulan == 4) {
            printf("April");
        } else if (Bulan == 5) {
            printf("Mei");
        } else if (Bulan == 6) {
            printf("Juni");
        } else if (Bulan == 7) {
            printf("Juli");
        } else if (Bulan == 8) {
            printf("Agustus");
        } else if (Bulan == 9) {
            printf("September");
        } else if (Bulan == 10) {
            printf("Oktober");
        } else if (Bulan == 11) {
            printf("November");
        } else if (Bulan == 12) {
            printf("Desember"); 
        }
     }
 return 0;

}
