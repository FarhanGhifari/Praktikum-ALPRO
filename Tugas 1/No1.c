#include <stdio.h>
#include <stdlib.h>

int main() {
    
    // kamus
    int v0;
    int t;
    int a;
    float S;

    // algortitma
    
    printf("masukan v0 : ");
        scanf("%d" ,&v0);
    printf("masukan t : ");
        scanf("%d" ,&t);
    printf("masukan a : ");
        scanf("%d" ,&a);
    
    S = v0*t + 0.5*(a*t*t);

    printf("hasil jarak : %f" ,S);

}