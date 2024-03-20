#include <stdio.h>

int main() {
    // Kamus
    int iA, iB;
    char pilihan;

    // Algoritma
    // Input dua bilangan bulat iA dan iB
    printf("Masukkan bilangan bulat pertama (iA): ");
    scanf("%d", &iA);
    printf("Masukkan bilangan bulat kedua (iB): ");
    scanf("%d", &iB);

    // Input pilihan menu karakter
    printf("Masukkan pilihan menu karakter (a - f): ");
    scanf(" %c", &pilihan);

    // Proses pilihan menu
    if (pilihan == 'a') {
        printf("Hasil iA + iB adalah %d\n", iA + iB);
    } 
    else if (pilihan == 'b') {
        printf("Hasil iA - iB adalah %d\n", iA - iB);
    } 
    else if (pilihan == 'c') {
        printf("Hasil iA * iB adalah %d\n", iA * iB);
    } 
    else if (pilihan == 'd') {
        printf("Hasil iA / iB adalah %.2f\n", (float)iA / iB);
    } 
    else if (pilihan == 'e') {
        printf("Hasil iA div iB adalah %d\n", iA / iB);
    } 
    else if (pilihan == 'f') {
        printf("Hasil iA mod iB adalah %d\n", iA % iB);
    } 
    else {
        printf("Bukan pilihan yang benar\n");
    }

    return 0;
}
