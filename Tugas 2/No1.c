#include <stdio.h>
 
int main() {

    //kamus

    int i;

    //algoritma
    
    printf("masukkan nilai i :");
    scanf("%d", &i);
    if (i == 0) {
        printf("bilangan 0");
    } else if (i > 0) {
        printf("bilangan bulat positif");
    } else {
        printf("bilangan bulat negatif");
    }

    return 0;
}