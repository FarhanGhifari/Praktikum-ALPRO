#include <stdio.h>

int main() {
    int t1, t2, t3, totalT;
    
    // Baca tahanan dari masukan keyboard
    printf("Masukkan nilai tahanan 1: ");
    scanf("%d", &t1);
    printf("Masukkan nilai tahanan 2: ");
    scanf("%d", &t2);
    printf("Masukkan nilai tahanan 3: ");
    scanf("%d", &t3);
    
    // Validasi tahanan
    if (t1 <=0 || t2 <=0 || t3 <=0) {
        printf("Masukan tahanan tidak boleh negatif");
    } else {
        // Hitung total tahanan jika semua tahanan tidak negatif
        totalT = t1 + t2 + t3;
        printf("Total tahanan: %d", totalT);
    }
    
    return 0;
}
